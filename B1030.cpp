#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	long long *arr;
	long long p;
	cin>>n>>p;
	arr = new long long[n];
	for(int i = 0; i < n; i++)
		cin>>arr[i];
	sort(arr, arr + n, less<long long>());
		
	int t = 0, max = 1;
	for(int i = 0; i < n; i++){
		int j = t;
		while(j < n && arr[i] * p >= arr[j])
			j++;
		if(j == n){
			max = n - i > max ? n - i : max;
			break;
		}
		else{
			t = j;
			max = t - i > max ? t - i : max;
		}
	}
	cout<<max<<endl;	


	return 0;
}
