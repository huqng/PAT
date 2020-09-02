#include<iostream>
#include<cmath>
using namespace std;

bool IsPrime(int n){
	if(n < 2)
		return false;
	else if(n < 4)
		return true;
	else{
		for(int i = 2; i <= sqrt(n); i++)
			if(n%i==0)
				return false;
	}
	return true;
}

int main(){
	int m, n;
	cin>>m>>n;
	int cnt = 0;
	int i = 0, j = 0;
	while(cnt < n){
		if(IsPrime(i)){
			cnt++;
			if(cnt >= m){
				cout<<i;
				j++;
				if(j % 10 && cnt < n)
					cout<<" ";
				else if(cnt < n)
					cout<<endl;
			}
		}
		i++;
	}
				
				
	return 0;
}
