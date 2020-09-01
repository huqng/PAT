#include<iostream>
#include<string>
#include<cstring>
using namespace std;

#define MAX 1000000007

int NumOfPAT(int n, string& s, int**a);			// if not reference of string, a lot of memory would be wasted
int NumOfPA(int n, string& s, int**a);
int NumOfP(int n, string& s, int**a);

int main(){
	string s;
	cin>>s;
	int len = s.length();
	int**a = new int*[3];
	for(int i = 0; i < 3; i++){
		a[i] = new int[len];
		memset(a[i], 0xFF, len * sizeof(int));
	}
	cout<<NumOfPAT(len, s, a);
	return 0;
}

int NumOfPAT(int n, string& s, int**a){
	if(n < 3) 
		return a[0][n-1] = 0;
	int ret1 = 0, ret2 = 0;
	if(s[n-1] == 'T')
		ret1 = a[1][n-2] >= 0 ? a[1][n-2] : NumOfPA(n-1, s, a);
	ret2 = a[0][n-2] >= 0 ? a[0][n-2] : NumOfPAT(n-1, s, a);
	int ret = (ret1 + ret2) % MAX;
	a[0][n-1] = ret;
	return ret;
}
int NumOfPA(int n, string& s, int**a){
	if(n < 2)
		return a[1][n-1]=0;
	int ret1 = 0, ret2 = 0;
	if(s[n-1] == 'A')
		ret1 = a[2][n-2] >= 0 ? a[2][n-2] : NumOfP(n-1, s, a);
	ret2 = a[1][n-2] >= 0 ? a[1][n-2] : NumOfPA(n-1, s, a);
	int ret = (ret1 + ret2) % MAX;
	a[1][n-1] = ret;
	return ret;
}
int NumOfP(int n, string& s, int**a){
	if(n < 1)
		return a[2][n-1]=0;
	else if(n == 1)
		return a[2][n-1]=(s[0]=='P');
	int ret1 = a[2][n-2] >= 0 ? a[2][n-2] : NumOfP(n-1, s, a);
	int ret = (ret1 + (s[n-1] == 'P'))%MAX;
	a[2][n-1] = ret;
	return ret;
}
