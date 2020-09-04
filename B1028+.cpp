#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	cin>>n;
	string youngest = "1814/09/06", oldest = "2014/09/'06";
	string oldestname = "", youngestname = "";
	string tmpname, tmpdate;
	int cnt = 0;
	for(int i = 0; i < n; i++){
		cin>>tmpname>>tmpdate;
		if(tmpdate <= "2014/09/06" && tmpdate >= "1814/09/06"){
			cnt++;
			if(tmpdate < oldest){
				oldest = tmpdate;
				oldestname = tmpname;
			}
			if(tmpdate > youngest){
				youngest = tmpdate;
				youngestname = tmpname;
			}
		}
	}
	if(cnt)
		cout<<cnt<<" "<<oldestname<<" "<<youngestname<<endl;
	else
		cout<<"0"<<endl;
	return 0;
}
		
		
