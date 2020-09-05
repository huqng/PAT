#include<iostream>

#include<cstdio>
using namespace std;

long long int gcd(long long int a, long long int b){
	if(a < b)	return gcd(b, a);
	else if(b == 0)	return a;
	else		return gcd(b, a % b);
}

void PrintRational(long long int a, long long int b){
	if(b == 0){
		cout<<"Inf";
		return;
	}
	if(a == 0){
		cout<<"0";
		return;
	}
	bool neg = ((a < 0) != (b < 0));
	if(neg)	
		cout<<"(-";
	a = abs(a);
	b = abs(b);
	if(a >= b){
		long long int k = a / b;
		a -= k * b;
		cout<<k;
		if(a != 0)
			cout<<" ";
	}
	if(a != 0){
		long long int t = gcd(b, a);
		a /= t;
		b /= t;
		cout<<a<<"/"<<b;
	}
	if(neg)
		cout<<")";
}

int main(){
	long long int a1, b1, a2, b2;
	scanf("%lld/%lld %lld/%lld", &a1, &b1, &a2, &b2);
	cout<<"input succeeded: "<<a1<<"/"<<b1<<", "<<a2<<"/"<<b2<<endl;

	PrintRational(a1, b1);		
	cout<<" + ";
	PrintRational(a2, b2);
	cout<<" = ";
	PrintRational(a1 * b2 + a2 * b1, b1 * b2);	
	cout<<endl;

	PrintRational(a1, b1);		
	cout<<" - ";
	PrintRational(a2, b2);
	cout<<" = ";
	PrintRational(a1 * b2 - a2 * b1, b1 * b2);	
	cout<<endl;

	PrintRational(a1, b1);		
	cout<<" * ";
	PrintRational(a2, b2);
	cout<<" = ";
	PrintRational(a1 * a2, b1 * b2);	
	cout<<endl;

	PrintRational(a1, b1);		
	cout<<" / ";
	PrintRational(a2, b2);
	cout<<" = ";
	PrintRational(a1 * b2, b1 * a2);	
	cout<<endl;

	return 0;
}
