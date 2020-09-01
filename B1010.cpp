#include<iostream>
using namespace std;
int main(){
	int coef, exp;
	cin >> coef >> exp;
	if(exp == 0){
		cout<<"0 0";
		return 0;
	}
	else
		cout << coef * exp << " " << exp - 1;
	while(cin >> coef >> exp){
		if(exp > 0)
			cout << " " << coef * exp << " " << exp - 1;
	}
	return 0;
}
