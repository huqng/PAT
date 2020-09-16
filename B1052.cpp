#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	vector<string>v[3];
	string s;
	for(int i = 0; i < 3; i++){
		getline(cin, s);
		for(int j = 0; j < s.length(); j++){
			if(s[j] == '['){
				int k = 1;
				while(j + k < s.length() && s[j + k] != ']')
					k++;
				v[i].push_back(string(s, j + 1, k - 1));
				j += k;
			}
		}
	}
	int n = 0;
	cin>>n;
	for(int i = 0; i < n; i++){
		int lh, le, m, re, rh;
		cin>>lh>>le>>m>>re>>rh;
		lh--;	
		le--;
		m--;
		re--;
		rh--;
		if(lh >= v[0].size() || le >= v[1].size() || m >= v[2].size() ||
			re >= v[1].size() || rh >= v[0].size())
			cout<<"Are you kidding me? @\\/@"<<endl;
		else
			cout	<<v[0][lh]<<"("<<v[1][le]<<v[2][m]
				<<v[1][re]<<")"<<v[0][rh]<<endl;
	}	
	return 0;
}
