#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
	string a, b;
	int na[128], nb[128];
	memset(na, 0, 128 * sizeof(int));
	memset(nb, 0, 128 * sizeof(int));
	cin>>a;
	for(int i = 0; i < a.length(); i++)
		na[a[i]]++;
	cin>>b;
	for(int i = 0; i < b.length(); i++)
		nb[b[i]]++;
	

	int n = 0, m = 0;
	for(int i = 0; i < 128; i++){
		if(na[i] > nb[i])
			n += (na[i] - nb[i]);
		else
			m += (nb[i] - na[i]);
	}
	if(m > 0)
		cout<<"No "<<m<<endl;
	else
		cout<<"Yes "<<n<<endl;
	return 0;
}
	
	
