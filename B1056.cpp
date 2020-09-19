#include<iostream>
using namespace std;
int main(){
	int n, sum = 0, t;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>t;
		sum += 11 * t * (n - 1);
	}
	cout<<sum<<endl;
	return 0;
}
	
