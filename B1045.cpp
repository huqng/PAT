#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
	int n;
	int* a = new int[100000];
	bool* l = new bool[100000];
	memset(l, 0, 100000);
	vector<int>v;
	cin>>n;
	for(int i = 0; i < n; i++)
		cin>>a[i];
	int current_max = 0;
	for(int i = 0; i < n; i++){
		if(a[i] > current_max){
			current_max = a[i]; 
			l[i] = true;
		}
	}
	int current_min = 1E+9 + 1;
	for(int i = n - 1; i >= 0; i--){
		if(a[i] < current_min){
			current_min = a[i];
			if(l[i])
				v.push_back(a[i]);
		}
	}
	sort(&v[0], &v[0] + v.size(), less<int>());
	cout<<v.size()<<endl;
	if(v.size()){
		cout<<v[0];
		for(int i = 1; i < v.size(); i++)
			cout<<" "<<v[i];
	}
	cout<<endl;	
				
	
	return 0;
}
