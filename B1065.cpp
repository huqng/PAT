#include<iostream>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<cstring>
using namespace std;
int main(){
	int n, t1, t2;
	cin>>n;
	bool *a = new bool[100000]();
	int *couple = new int[100000];
	memset(couple, -1, 100000 * sizeof(int));
	bool *attend = new bool[100000]();
	for(int i = 0; i < n; i++){
		cin>>t1>>t2;
		a[t1] = a[t2] = true;
		couple[t1] = t2;
		couple[t2] = t1;
	}

	int m, t;
	cin>>m;
	vector<int>v;
	for(int i = 0; i < m; i++){
		cin>>t;
		attend[t] = true;
	}
	for(int i = 0; i < 100000; i++){
		if(attend[i] && !a[i] || attend[i] && !attend[couple[i]])
			v.push_back(i);
	}
//	sort(v.begin(), v.end(), less<int>());
	cout<<v.size()<<endl;
	for(int i = 0; i < v.size(); i++){
		if(i)
			cout<<" ";
		cout<<setw(5)<<setfill('0')<<v[i];
	}
//	cout<<endl;
	return 0;
}
	


