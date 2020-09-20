#include<iostream>
using namespace std;

int gcd(int n, int m){
	if(n < m)
		return gcd(m, n);
	else if(m == 0)
		return n;
	else
		return gcd(m, n % m);
}

int main(){
	int n1, m1, n2, m2, k;
	char t;
	cin>>n1>>t>>m1>>n2>>t>>m2>>k;
	if(n1 * m2 > n2 * m1){
		swap(n1, n2);
		swap(m1, m2);
	}

	int cnt = 0;
	for(int i = n1 * k / m1 + 1; i * m2 < n2 * k; i++){
		if(gcd(i, k) == 1){
			if(cnt)
				cout<<" ";
			cout<<i<<"/"<<k;
			cnt++;
		}
	}

	return 0;
}
