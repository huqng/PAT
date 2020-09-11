#include<iostream>
#include<string>
#include<cassert>
using namespace std;

char toJQK(int n){
	switch(n){
		case 10:	return 'J';
		case 11:	return 'Q';
		case 12:	return 'K';
	}
	return -1;
}

int main(){
	string a, b;
	cin>>a>>b;
	if(a.length() < b.length())
		a = string(b.length() - a.length(), '0') + a;
	else if(a.length() > b.length())
//		a = string(a, a.length() - b.length(), b.length());
		b = string(a.length() - b.length(), '0') + b;


	for(int i = b.length() - 1; i >= 0; i--){
		if((b.length() - 1 - i) % 2 == 0){
			b[i] += (a[i] - '0' - '0');
			b[i] = b[i] % 13;
			if(b[i] > 9)
				b[i] = toJQK(b[i]);
			else
				b[i] += '0';
		}
		else{
			b[i] -= a[i];
			if(b[i] < 0)
				b[i] += 10;
			b[i] += '0';
		}
	}
	cout<<b<<endl;
	return 0;
}
