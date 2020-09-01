#include<iostream>
#include<string>
using namespace std;

bool IsPAT(string s){
	int i = 0;
	int numofA1 = 0;
	int numofA2 = 0;
	int numofA3 = 0;
	while(i < s.length() && s[i] == 'A'){
		numofA1++;
		i++;
	}
	if(i >= s.length() || s[i++] != 'P')
		return false;
	while(i < s.length() && s[i] == 'A'){
		numofA2++;
		i++;
	}
	if(i >= s.length() || s[i++] != 'T')
		return false;
	while(i < s.length() && s[i] == 'A'){
		numofA3++;
		i++;
	}
	if(i == s.length() && numofA2 && numofA1 * numofA2 == numofA3)
		return true;
	else
		return false;

}

int main(){
	int n;
	cin>>n;
	string *a = new string[n];
	for(int i = 0; i < n; i ++){
		cin>>a[i];
		if(IsPAT(a[i]))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
