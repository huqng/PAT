#include<iostream>
using namespace std;

int main(){
	int c1, c2, c;
	cin>>c1>>c2;
	c = c2 - c1;
	int hh, mm, ss;
	double ssf;
	hh = c / 360000;
	mm = (c - 360000 * hh) / 6000;
	ssf = (double)(c - 360000 * hh - 6000 * mm) / 100;
	if(ssf - (int)ssf >= 0.5)
		ss = (int)ssf + 1;
	else
		ss = (int)ssf;
	
	printf("%02d:%02d:%02d\n", hh, mm, ss);
	return 0;
}
