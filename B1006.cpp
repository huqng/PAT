#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int d2 = n / 100, d1 = (n % 100) / 10, d0 = n % 10;
	for(int i = 0; i < d2; i++)cout<<"B";
	for(int i = 0; i < d1; i++)cout<<"S";
	for(int i = 0; i < d0; i++)cout<<i+1;
	if(n == 0)cout<<0;
	return 0;
}
