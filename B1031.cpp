#include<iostream>
#include<string>
using namespace std;

const int w[] = {
	7,	9,	10,	5,	8,
	4,	2,	1,	6,	3,
	7,	9,	10,	5,	8,
	4,	2
};

const char check[] = "10X98765432";

bool valid(string &s){
	int sum = 0;
	for(int i = 0; i < 17; i++)
		sum += (s[i] - '0') * w[i];
	return s[17] == check[sum%11];
}

int main(){
	int n;
	cin>>n;
	string s;
	int cnt = 0;
	for(int i = 0; i < n; i++){
		cin>>s;
		if(!valid(s)){
			cnt++;
			cout<<s<<endl;
		}
	}
	if(cnt == 0)
		cout<<"All passed"<<endl;

	return 0;
}
