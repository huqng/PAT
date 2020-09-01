#include<iostream>
#include<cstring>
using namespace std;
int main(){
	bool IsCovered[101];
	bool IsInput[101];
	memset(IsCovered, 0, 101);
	memset(IsInput, 0, 101);
	int k, i=0;
	cin>>k;
	while(i < k){
		int t;
		cin>>t;
		IsInput[t] = true;
		t = t % 2 ? (3 * t + 1) / 2 : t / 2;
		while(t != 1){
//			if(IsCovered[t])   // have some problems here
//				break;
//			else{
				if(t <= 100 && t > 1)
					IsCovered[t] = true;
				if(t % 2)
					t = (3 * t + 1) / 2;
				else
					t = t / 2;
//			}	
		}
		i++;

	}

	bool IsFirst = true;
	for(int i = 100; i >= 2; i--){
		if(IsInput[i] && !IsCovered[i]){
			if(!IsFirst)
				cout<<" ";
			IsFirst = false;
			cout<<i;
		}
	}
	cout<<endl;
	return 0;
}
