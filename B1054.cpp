#include<iostream>
#include<regex>
#include<string>
#include<sstream>
#include<iomanip>
#include<cmath>
using namespace std;

bool IsLegal(string s, double* p){
	int index = 0;
	if(s[index] == '-' || s[index] == '+')
		index++;
	while(index < s.length() && isdigit(s[index]))
		index++;
	if(index < s.length() && s[index] == '.'){
		if(index + 3 < s.length())
			return false;
	}
	else if(index < s.length())
		return false;
	stringstream is(s);
	double d = 0;
	char c = 0;
	is>>d>>c;
	is.clear();

	if(c)
		return false;
	else if(fabs(d) > 1000)
		return false;
	else{
		*p = d;
		return true;
	}
}

int main(){
	int n, cnt = 0;
	double sum = 0;
	string s;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>s;
		double d;
		if(IsLegal(s, &d)){
			cnt++;
			sum += d;
		}
		else
			cout<<"ERROR: "<<s<<" is not a legal number"<<endl; 
	}
	if(cnt == 1)
		cout<<"The average of "<<cnt<<" number is ";
	else
		cout<<"The average of "<<cnt<<" numbers is ";
	if(cnt > 0)
		cout<<fixed<<setprecision(2)<<sum / cnt<<endl;
	else
		cout<<"Undefined"<<endl;
	return 0;
}
