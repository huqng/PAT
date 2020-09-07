#include<iostream>
#include<string>
using namespace std;

string low[13] = {
	"tret", "jan", "feb", "mar", "apr", 
	"may", "jun", "jly", "aug", "sep", 
	"oct", "nov", "dec"
};

string high[13] = {
	"", "tam", "hel", "maa", "huh", 
	"tou", "kes", "hei", "elo", "syy", "lok",
	"mer", "jou"
};

string e2m(int n){
	if(n < 13)
		return low[n];
	else if(n % 13)
		return high[n / 13] + " " + low[n % 13];
	else
		return high[n / 13];				
}
int m2e(string s){
	if(s.length() > 6){
		int h = 0, l = 0;
		for(int i = 0; i < 13; i++){
			if(s.substr(0, 3) == high[i]){
				h = i;
				break;
			}
		}
	
		for(int i = 0; i < 13; i++){
			if(s.substr(4, 3) == low[i]){
				l = i;
				break;
			}
		}
		return h * 13 + l;
	}
	else{
		for(int i = 0; i < 13; i++)
			if(s.substr(0, 3) == low[i] || s.substr(0, 4) == low[i])
				return i;
		for(int i = 0; i < 13; i++)
			if(s.substr(0, 3) == high[i])
				return 13 * i;;
		
	}
	return -1;
}

int main(){
	int n;
	cin>>n;
	getchar();
	string tmp;
	for(int i = 0; i < n; i++){
		getline(cin, tmp);
		if(tmp.length() > 6 || isalpha(tmp[0]))
			cout<<m2e(tmp)<<endl;
		else
			cout<<e2m(stoi(tmp))<<endl;
	}
	return 0;
}
