#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int* a = new int[n];
	for(int i = 0; i < n; i++)
		cin>>a[i];
	sort(a, a + n, greater<int>());
	
	if(a[0] <= 1){
		cout<<"0"<<endl;
		return 0;
	}
	for(int i = 0; i < n; i++){
		if(i + 1 >= a[i]){
			cout<<i<<endl;
			return 0;
		}
	}
	cout<<n<<endl;
	
	return 0;
}
