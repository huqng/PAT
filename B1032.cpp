#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int *sum = new int[100000];
	memset(sum, 0, 100000 * sizeof(int));
	int n;
	cin>>n;
	int school, score;
	for(int i = 0; i < n; i++){
		cin>>school>>score;
		sum[school] += score;
	}
	int max = 1;
	for(int i = 1; i < 100000; i++)
		if(sum[i] > sum[max])
			max = i;
	cout<<max<<" "<<sum[max]<<endl;
	return 0;
}
