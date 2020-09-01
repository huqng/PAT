#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	long long int**a = new long long int*[t];
	for(int i = 0; i < t; i++){
		a[i] = new long long int[3];
		cin >> a[i][0] >> a[i][1] >> a[i][1];
	}
	for(int i = 0; i < t; i++){
		cout << "Case #" << i + 1 << ": ";
		if(a[i][0] + a[i][1] > a[i][3])
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}
	return 0;
}
