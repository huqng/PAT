#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
	string s;
	//cin>>s;
	getline(cin, s);
	unsigned int sum = 0;
	for(int i = 0; i < s.length(); i++){
		if(isupper(s[i]))
			sum += (s[i] - 'A' + 1);
		else if(islower(s[i]))
			sum += (s[i] - 'a' + 1);
	}
	unsigned int mask = 0x80000000;
	while(mask && (mask & sum))
		mask >>= 1;
	if(mask == 0){
		cout<<"0 0"<<endl;
		return 0;
	}
	int num1 = 0, num0 = 0;
	while(mask){
		if(mask & sum)
			num1++;
		else
			num0++;
		mask >>= 1;
	}
	cout<<num0<<" "<<num1<<endl;

	return 0;
}
