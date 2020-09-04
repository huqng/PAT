#include<iostream>
#include<algorithm>
using namespace std;

int L, H;

struct student{
	int number, p1, p2, c;
};
bool cmp(struct student s, struct student t){
	if(s.c != t.c) 
		return s.c < t.c;
	else if(s.p1 + s.p2 != t.p1 + t.p2)
		return s.p1 + s.p2 > t.p1 + t.p2;
	else if(s.p1 != t.p1)
		return s.p1 > t.p1;
	else
		return s.number < t.number;
}


int main(){
	int n;
	cin>>n>>L>>H;
	struct student* arr = new struct student[n];
	int cnt = 0;

	for(int i = 0; i < n; i++) {
		cin>>arr[i].number>>arr[i].p1>>arr[i].p2;
		cnt ++;
		if(arr[i].p1 >= H && arr[i].p2 >= H)
			arr[i].c = 1;
		else if(arr[i].p1 >=H && arr[i].p2 >= L)
			arr[i].c = 2;
		else if(arr[i].p2 >= L && arr[i].p1 >= arr[i].p2)
			arr[i].c = 3;
		else if(arr[i].p1 >= L && arr[i].p2 >= L)
			arr[i].c = 4;
		else {
			arr[i].c = 5;			
			cnt--;
		}

	}
	sort(arr, arr + n,cmp);
	
	cout<<cnt<<endl;
	for(int i = 0; i < n; i++){
		if(arr[i].c <= 4)
			cout<<arr[i].number <<" "<<arr[i].p1<<" "<<arr[i].p2<<endl;
	}
	delete(arr);
	return 0;
}
