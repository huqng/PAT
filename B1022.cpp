#include<iostream>
#include<string>
using namespace std;

string tobase(int n, int base){
	if(n == 0)
		return "0";
	string ret;
	int r;
	while(n!=0){
		r = n % base;
		n /= base;
		ret.insert(ret.begin(), r + '0');
	}
	return ret;
}

int main(){
	int a = 123, b = 456, d = 8;
	cin>>a>>b>>d;
	cout<<tobase(a + b, d)<<endl;
	return 0;
}
