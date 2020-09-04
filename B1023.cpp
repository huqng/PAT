#include<iostream>
using namespace std;
int main(){
	int n[10];
	for(int i = 0; i < 10; i++)
		cin>>n[i];
	if(n[0]){
		int i = 1;
		while(n[i] == 0)
			i++;
		n[i]--;
		cout<<i;
	}
	for(int i = 0; i < 10; i++)
		for(int j = 0; j < n[i]; j++)
			cout<<i;
	return 0;
}
