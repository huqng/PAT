#include<iostream>
using namespace std;
int main(){
	long long g1, s1, k1, g2, s2, k2;
	scanf("%lld.%lld.%lld %lld.%lld.%lld", &g1, &s1, &k1, &g2, &s2, &k2);
	int g = 0, s = 0, k = g2 * 17 * 29 + s2 * 29 + k2 - (g1 * 17 * 29 + s1 * 29 + k1);
	if(k < 0){
		cout<<"-";
		k = -k;
	}
	s = k / 29;
	k = k - s * 29;
	g = s / 17;
	s = s - g * 17;
	cout<<g<<"."<<s<<"."<<k<<endl; 
	return 0;}	
