#include<iostream>
#include<iomanip> 

long long int s(long long int n){	// long long or double
	return	(n + n * n) / 2;
}
using namespace std;
int main(){
	long double sum = 0;		// precision of double is not enough
	int n;
	cin>>n;
	double t;
	for(int i = 0; i < n; i++){
		cin>>t;
		sum += t * (s(n) - s(i) - s(n - i - 1));
	}
	cout<<fixed<<setprecision(2)<<sum<<endl;
	return 0;
}
