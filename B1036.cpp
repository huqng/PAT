#include<iostream>
using namespace std;
int main(){
	int n;
	char c;
	cin>>n>>c;
	for(int i = 0; i < n; i++)
		cout<<c;
	cout<<endl;
	int lines;
	lines = (n + 1) / 2;
	for(int i = 0; i < lines - 2; i++){
		cout<<c;
		for(int j =0; j < n - 2; j++)
			cout<<" ";
		cout<<c<<endl;
	}
	for(int i = 0; i < n; i++)
		cout<<c;
	return 0;
}
