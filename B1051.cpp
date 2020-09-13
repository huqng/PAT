#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	double r1, p1, r2, p2;
	cin>>r1>>p1>>r2>>p2;
	double a1, b1, a2, b2, a, b;
	a1 = r1 * cos(p1);
	a2 = r2 * cos(p2);
	b1 = r1 * sin(p1);
	b2 = r2 * sin(p2);
	a = a1 * a2 - b1 * b2;
	b = a1 * b2 + a2 * b1;

	if(a < 0 && a >= -0.005)
		cout<<"0.00";
	else
		cout<<fixed<<setprecision(2)<<a;

	if(b < 0 && b >= -0.005)
		cout<<"+0.00";
	else
		cout<<fixed<<setprecision(2)<<showpos<<b;
	cout<<"i"<<endl;
	return 0;
}
