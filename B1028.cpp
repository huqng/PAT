// Too fucking complex
#include<iostream>
using namespace std;
//2014.09.06			
struct date{
	int y, m, d;
};

struct citizen{
	char name[6];
	struct date birthday;
};

bool lessthan(struct date date1, struct date date2){
	return	(date1.y < date2.y) || 
		((date1.y == date2.y) && ((date1.m < date2.m) || ((date1.m == date2.m) && (date1.d < date2.d))));
}
bool greaterthan(struct date date1, struct date date2){
	return lessthan(date2, date1);
}

bool valid(struct citizen c){
	struct date now = {2014, 9, 6};	
	struct date old = {1814, 9, 6};
	if(lessthan(now, c.birthday))
		return false;
	if(lessthan(c.birthday, old))
		return false;
	return true;
}

int main(){
	int n;
	cin>>n;
	struct citizen oldest, youngest, tmp;
	int cnt = 0, vcnt = 0;
	do{
		scanf("%s %d/%d/%d", &tmp.name, &tmp.birthday.y, &tmp.birthday.m, &tmp.birthday.d);
		cnt++;
	}while(cnt < n && !valid(tmp));
	if(valid(tmp)){
		oldest = youngest = tmp;
		vcnt = 1;
	}
	while(cnt < n){
		cnt++;
		scanf("%s %d/%d/%d", &tmp.name, &tmp.birthday.y, &tmp.birthday.m, &tmp.birthday.d);
		if(valid(tmp)){
			vcnt++;
			oldest = lessthan(tmp.birthday, oldest.birthday) ? tmp : oldest;
			youngest = lessthan(youngest.birthday, tmp.birthday) ? tmp : youngest;
		}
	}
	cout<<vcnt<<" "<<oldest.name<<" "<<youngest.name<<endl;
	
	
	return 0;
}
