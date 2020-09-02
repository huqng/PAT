#include<iostream>
#include<cstring>
#include<iomanip>


using namespace std;
void p(int a){
		cout<<a<<" ";
}
void pn(){
	cout<<"N ";
}
int main(){
	int n;
	cin>>n;
	int cnt[5];
	memset(cnt, 0, 5 * sizeof(int));
	int a[5];
	memset(a, 0, 5 * sizeof(int));
	int flag1 = 1;
	int t;
	int cnt1 = 0, cnt3 = 0;

	for(int i = 0; i < n; i++){
		cin>>t;
		switch(t%5){
			case 0:	a[0] += t % 2 ? 0 : t;	break;
			case 1: a[1] += flag1 * t;
				flag1 = -flag1;
				cnt1++;
				break;
			case 2: a[2]++;			break;
			case 3: a[3] += t;
				cnt3++;
				break;
			case 4: a[4] = a[4] > t ? a[4] : t;
			default:			break;
		}
	}
	if(a[0])p(a[0]);
	else pn();
	
	if(cnt1)p(a[1]);
	else pn();

	if(a[2])p(a[2]);
	else pn();

	if(a[3])cout<<fixed<<setprecision(1)<<(double)a[3]/cnt3<<" ";	
	else pn();

	if(a[4])cout<<a[4];
	else cout<<"N";

	return 0;
}
