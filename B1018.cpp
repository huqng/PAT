#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	char *a = new char[n];
	char *b = new char[n];
	int win = 0, lose = 0, raw = 0;
	int win1[3] = {0}, win2[3] = {0};	// bcj
	for(int i = 0; i < n; i++){
		cin >> a[i] >> b[i];
		if(a[i] == b[i]) raw++;
		else if(a[i] == 'C'){
			if(b[i] == 'J'){
				win++;
				win1[1]++;
			}
			else{
				lose++;
				win2[0]++;
			}
		}
		else if(a[i] == 'J'){
			if(b[i] == 'B'){
				win++;
				win1[2]++;
			}
			else{
				lose++;
				win2[1]++;
			}
		}
		else{
			if(b[i] == 'C'){
				win++;
				win1[0]++;
			}
			else{
				lose++;
				win2[2]++;
			}
		}
	}
	cout<<win<<" "<<raw<<" "<<lose<<endl;
	cout<<lose<<" "<<raw<<" "<<win<<endl;
	int t = 0;
	for(int i = 0; i < 3; i++) if(win1[i] > win1[t]) t = i;
	switch(t){
		case 0: cout<<"B";	break;
		case 1: cout<<"C";	break;
		case 2: cout<<"J";	break;
	}
	cout<<" ";
	for(int i = 0; i < 3; i++) if(win2[i] > win2[t]) t = i;
	switch(t){
		case 0: cout<<"B";	break;
		case 1: cout<<"C";	break;
		case 2: cout<<"J";	break;
	}
	return 0;
}
