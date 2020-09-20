#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
	int n, a, b;
	double max = -1;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>a>>b;
		if(sqrt(a * a + b * b) > max)
			max = sqrt(a * a + b * b);
	}
	cout<<fixed<<setprecision(2)<<max<<endl;
	return 0;
}
