#include<iostream>
#include<string>
using namespace std;
int main(){
	string a;
	cin>>a;
	int i = a.length() - 1;
	while(isdigit(a[i]))
		i--;
	int exp = atoi(&a[0] + i);

	if(a[0] == '-')
		cout<<"-";

	if(exp <= -1){
		cout<<"0.";
		while(exp < -1){
			cout<<"0";
			exp++;
		}
		for(int j = 0; j < i; j++){
			if(isdigit(a[j]))
				cout<<a[j];
		}
	}
	else if(exp < i - 4){
		int cnt = 0;
		for(int j = 0; j < i; j++){
			if(isdigit(a[j])){
				cout<<a[j];
				cnt++;
				if(cnt == exp + 1)
					cout<<".";
			}
		}
	}
	else{
		int cnt = 0;
		for(int j = 0; j < i; j++){
			if(isdigit(a[j])){
				cout<<a[j];
				cnt++;
			}
		}
		while(cnt < exp + 1){
			cout<<"0";
			cnt++;
		}
	}

	return 0;
}
