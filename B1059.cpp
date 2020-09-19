#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

bool IsPrime(int n){
	if(n < 2)
		return false;
	else if(n < 4)
		return true;
	for(int i = 2; i <= sqrt(n); i++)
		if(n % i == 0)
			return false;
	return true;
}

int main(){
	int a[10000] = {0};
	bool check[10000] = {false};
	int n, t;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>t;
		a[t] = i + 1;	
	}
	int k;
	cin>>k;
	for(int i = 0; i < k; i++){
		cin>>t;
		cout<<setfill('0')<<setw(4)<<t<<": ";
		if(a[t] == 0)
			cout<<"Are you kidding?"<<endl;
		else if(check[t])
			cout<<"Checked"<<endl;
		else if(a[t] == 1){
			cout<<"Mystery Award"<<endl;
			check[t] = true;
		}
		else if(IsPrime(a[t])){
			cout<<"Minion"<<endl;
			check[t] = true;
		}
		else{
			cout<<"Chocolate"<<endl;
			check[t] = true;
		}
	}
		
	
	return 0;
}
