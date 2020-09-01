#include<iostream>
using namespace std;
int main(){
	int n, m, *a;
	cin>>n>>m;
	a = new int[n];
	for(int i = 0; i < n; i++)
		cin>>a[i];
	int index = -m;
	while(index < 0)
		index += n;
	cout<<a[index];
	for(int i = 1 + index; i < index + n; i++)
		cout<<" "<<a[i%n];
	return 0;
}
