#include<iostream>
using namespace std;
int main(){
	int n, m;
	cin>>n>>m;
	int *score = new int[m];
	int *ans = new int[n];
	int *t = new int[n];
	for(int i = 0; i < m; i++)
		cin>>score[i];
	for(int i = 0; i < m; i++)
		cin>>ans[i];
	for(int i = 0; i < n; i++){
		int sum = 0;
		for(int j = 0; j < m; j++){
			cin>>t[j];
			if(t[j] == ans[j])
				sum += score[j];
		}
		cout<<sum<<endl;
	}
					
	

	return 0;
}

