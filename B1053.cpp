#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n, d;
	double e;
	cin>>n>>e>>d;
	int cnt1 = 0, cnt2 = 0;
	for(int i = 0; i < n; i++){
		int k, cnt = 0;
		double t;
		cin>>k;
		for(int j = 0; j < k; j++){
			cin>>t;
			if(t < e)
				cnt++;
		}
		if(cnt > k / 2 && k <= d)
			cnt1++;
		else if(cnt > k / 2)
			cnt2++;
	}
	cout<<fixed<<setprecision(1)<<(double)cnt1 * 100 / n<<"% ";
	cout<<fixed<<setprecision(1)<<(double)cnt2 * 100 / n<<"%"<<endl;

	return 0;
}
