#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

int dec(int n){
	int a[4];
	a[0] = n / 1000;
	a[1] = (n % 1000) / 100;
	a[2] = (n % 100) / 10;
	a[3] = n % 10;
	sort(a, a + 4, less<int>());
	return 1000 * a[0] + 100 * a[1] + 10 * a[2] + a[3];

}

int inc(int n){
	int a[4];
	a[0] = n / 1000;
	a[1] = (n % 1000) / 100;
	a[2] = (n % 100) / 10;
	a[3] = n % 10;
	sort(a, a + 4, greater<int>());
	return 1000 * a[0] + 100 * a[1] + 10 * a[2] + a[3];
}
int main(){
	int n;
	cin>>n;
	if(n%1111 == 0) {
		cout<<setw(4)<<setfill('0')<<n<<" - "<<setw(4)<<setfill('0')<<n<<" = 0000"<<endl;
		return 0;
	}
	else{
		do{
			cout	<<setw(4)<<setfill('0')<<inc(n)
				<<" - "<<setw(4)<<setfill('0')<<dec(n);
			n = inc(n) - dec(n);
			cout<<" = "<<setw(4)<<setfill('0')<<n<<endl;
		}while(n != 6174);
	}
	return 0;
}
