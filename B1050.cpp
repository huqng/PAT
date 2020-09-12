#include<iostream>
#include<algorithm>
using namespace std;
inline int min(int a, int b){ return a < b ? a : b; }
inline int min4(int a, int b, int c, int d){ return min(min(a, b), min(c, d)); }
int f(int i, int j, int m, int n){
	int L = min4(i, j, m - i - 1, n - j - 1);
	int out = 2 * L * (m + n - 2 * L);
	int index = out; 
	if(i == L){
		index += (j - L);
		return index;
	}
	else	index += (n - 2 * L);
	if(n - j - 1 == L){
		index += (i - L - 1);
		return index;
	}
	else	index += (m - 2 * L - 1);
	if(m - i - 1 == L){
		index += (n - j - L - 2);
		return index;
	}
	else	index += (n - 2 * L - 1);
	if(j == L){
		index += (m - L - i - 2);
		return index;
	}
	else{
		cerr<<"Invalid index!"<<endl;
		return -1;
	}
}
int main(){
	int N;
	cin>>N;
	int *a = new int[N];
	int m = 1, n;
	for(int i = 1; i <= N; i++){
		if(N % i == 0 && N / i <= i){
			m = i;
			n = N / i;
			break;
		}
	}
	for(int i = 0; i < N; i++)	cin>>a[i];
	sort(a, a + N, greater<int>());
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(j != 0)
				cout<<" ";
			int index = f(i, j, m, n);
			cout<<a[index];
		}
		 cout<<endl;
	}
	return 0;
}
	
