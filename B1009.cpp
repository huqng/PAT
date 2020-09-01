#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	vector<string>vec;
	string s;
	while(cin>>s)
		vec.push_back(s);
	cout<<vec[vec.size() - 1];
	for(int i = vec.size() - 2; i >= 0; i--)
		cout<<" " << vec[i];
	return 0;
}
