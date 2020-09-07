#include<iostream>
using namespace std;
int main(){
	int n, k, t;
	cin>>n;
	int *a = new int[101];
	for(int i = 0; i < n; i++){
//		cin>>t;
		scanf("%d", &t);
		a[t]++;
	}
	cin>>k>>t;
	cout<<a[t];
	for(int i = 1; i < k; i++){
		cin>>t;
		cout<<" "<<a[t];
	}
	return 0;
}

