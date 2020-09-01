#include<iostream>
#include<cmath>
using namespace std;

bool IsPrime(int n){
	if(n < 2)
		return false;
	else if(n < 4)
		return true;
	for(int i = 2; i <= sqrt(n); i++)
		if(!(n%i))
			return false;
	return true;
}


int main(){
	int n;
	cin>>n;
	bool last = false, cur;
	int cnt = 0;
	for(int i = 3; i <= n; i+=2){
		cur = IsPrime(i);
		if(cur && last)
			cnt++;
		last = cur;
	}
	cout<<cnt;

	return 0;
}
