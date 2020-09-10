#include<iostream>
using namespace std;
int main(){
	int a[100], b[100], c[100], d[100];
	int n;
	int cnt1 = 0, cnt2 = 0;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>a[i]>>b[i]>>c[i]>>d[i];
		if(b[i] != d[i]){
			if(a[i] + c[i] == b[i])
				cnt2++;
			if(a[i] + c[i] == d[i])
				cnt1++;
		}	
	}
	cout<<cnt1<<" "<<cnt2<<endl;
	return 0;
}
