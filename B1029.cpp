#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool find(vector<char>v, char c){
	for(int i = 0; i < v.size(); i++)
		if(toupper(c) == toupper(v[i]))
			return true;
	return false;

}


int main(){
	string s1, s2;
	vector<char>v;
	cin>>s1>>s2;
	int i = 0, j = 0;
	while(i < s1.length()){
		if(s1[i] != s2[j]){
			if(find(v, s1[i]))
				i++;
			else{
				v.push_back(toupper(s1[i]));
				i++;
			}
		}
		else{
			i++;
			j++;
		}
	}
	for(int k = 0; k < v.size(); k++)
		cout<<v[k];
	return 0;
}
