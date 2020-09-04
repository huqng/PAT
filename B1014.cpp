#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
	string a, b, c, d;
	cin>>a>>b>>c>>d;
	int day = -1, hour, minute;
	for(int i = 0; i < a.length(); i++){
		if(day == -1){
			if(a[i] == b[i] && isupper(a[i]) && a[i] <= 'G'){
				day = a[i] - 'A' + 1;
			}
		}
		else if(a[i] == b[i] && (isupper(a[i]) && a[i] <= 'N' || isdigit(a[i]))){
			hour = isdigit(a[i]) ? a[i] - '0' : a[i] - 'A' + 10;
			break;
		}
	}
	for(int i = 0; i < c.length(); i++){
		if(c[i] == d[i] && isalpha(c[i])){
			minute = i;
			break;
		}
	}
	switch (day){
		case 1:	cout<<"MON";	break;
		case 2: cout<<"TUE";	break;
		case 3: cout<<"WED";	break;
		case 4: cout<<"THU";	break;
		case 5: cout<<"FRI";	break;
		case 6: cout<<"SAT";	break;
		case 7: cout<<"SUN";	break;
		default:		break;
	}
	cout<<" ";
	cout<<setw(2)<<setfill('0')<<hour<<":";
	cout<<setw(2)<<setfill('0')<<minute;

	

	return 0;
}
