#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	getline(cin, s);
	int cnt[128] = {0};
	for(int i = 0; i < s.length(); i++){
		if(isalpha(s[i])){
			if(isupper(s[i]))
				s[i] = tolower(s[i]);
			cnt[s[i]]++;
		}
	}
	int index = 0;
	for(int i = 1; i < 128; i++){
		if(cnt[i] > cnt[index])
			index = i;
	}
	cout<<(char)index<<" "<<cnt[index]<<endl;
	return 0;
}
