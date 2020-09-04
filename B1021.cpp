#include<iostream>
#include<string>
using namespace std;
int main(){
	int cnt[10] = {0};
	char t;
	while(cin>>t){
		if('0' <= t && t <= '9')
			cnt[t - '0']++;
	}
	for(int i = 0; i < 10; i++)
		if(cnt[i])
			cout<<i<<":"<<cnt[i]<<endl;
	

	return 0;
}
