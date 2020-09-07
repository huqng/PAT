#include<iostream>
#include<string>
using namespace std;
int main(){
	char pat[] = "PATest";
	int cnt[6] = {0};
	string s;
	cin>>s;
	for(int i = 0; i < s.length(); i++){
		switch(s[i]){
			case 'P':	cnt[0]++;	break;
			case 'A':	cnt[1]++;	break;
			case 'T':	cnt[2]++;	break;
			case 'e':	cnt[3]++;	break;
			case 's':	cnt[4]++;	break;
			case 't':	cnt[5]++;
			default:	break;
		}
	}
	while(1){
		bool empty = 1;
		for(int i = 0; i < 6; i++){
			if(cnt[i]){
				empty = 0;
				cnt[i]--;
				cout<<pat[i];
			}
		}
		if(empty)
			break;
	}
	cout<<endl;
	return 0;
}
