#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){
	bool IsBroken[128];
	memset(IsBroken, 0, 128);
	string BrokenKeys, InputString;
//	cin>>BrokenKeys>>InputString;
	getline(cin, BrokenKeys);		// BrokenKeys might be empty
	cin>>InputString;

	for(int i = 0; i < BrokenKeys.length(); i++)
		IsBroken[BrokenKeys[i]] = true;	
	for(int i = 0; i < InputString.length(); i++){
		if(
			!IsBroken[toupper(InputString[i])] && 
			!(IsBroken['+'] && isupper(InputString[i]))
		)
			cout << InputString[i];
	}
	cout<<endl;
	
	return 0;
}
