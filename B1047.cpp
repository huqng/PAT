#include<iostream>
using namespace std;
int main(){
	int score[10001] = {-1, 0};
	int team, member, tmpscore;
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		scanf("%d-%d %d", &team, &member, &tmpscore);
		score[team] += tmpscore;
	}
	int max = 0;
	for(int i = 1; i <= 10000; i++)
		if(score[i] > score[max])
			max = i;
	cout<<max<<" "<<score[max]<<endl;
	return 0;
}

	
	
