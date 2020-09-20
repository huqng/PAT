#include<iostream>
using namespace std;

int f(int n){
	int ret = 0;
	for(int i = 0; i < 4; i++){
		ret += (n % 10);
		n /= 10;
	}
	return ret;
}
	

int main(){
	bool a[37] = { false };
	int n, t, cnt = 0;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>t;
		t = f(t);
		if(a[t] == false)
			cnt++;
		a[t] = true;;
	}
	cout<<cnt<<endl;
	int first = 1;
	for(int i = 0; i < 37; i++){
		if(a[i]){
			if(!first)
				cout<<" ";
			cout<<i;
			first = 0;
		}
	}
	
	return 0;
}
