#include<iostream>
#include<cmath>
using namespace std;

void merge_print(int *a, int slen, int len){
	int *b = new int[len];
	int i3 = 0;
	for(int i = 0; i < (len + 2 * slen - 1) / (2 * slen); i++){ 
		int i1 = i * 2 * slen, i2 = i1 + slen;;
		while(
			i1 < i * 2 * slen + slen && 
			i2 < i * 2 * slen + 2 * slen 
			&& i1 < len && i2 < len)
		{
			if(a[i1] < a[i2])
				b[i3++] = a[i1++];
			else
				b[i3++] = a[i2++];
		}
		while(i1 < i * 2 * slen + slen && i1 < len)
			b[i3++] = a[i1++];
		while(i2 < i * 2 * slen + 2 * slen && i2 < len)
			b[i3++] = a[i2++];
	}
	cout<<b[0];
	for(int i = 1; i < len; i++)
		cout<<" "<<b[i];
}
	

int main(){
	int a[100];
	int b[100];
	int n;
	bool IsInsertion = 0;
	cin>>n;
	for(int i = 0; i < n; i++)
		cin>>a[i];
	for(int i = 0; i < n; i++){
		cin>>b[i];
		if(i > 0 && i % 2){
			if(b[i - 1] > b[i])
				IsInsertion = 1;
		}
	}
	if(IsInsertion){
		cout<<"Insertion Sort"<<endl;
		for(int i = 1; i < n; i++){
			if(b[i - 1] > b[i]){
				while(i > 0 && b[i - 1] > b[i]){
					swap(b[i], b[i - 1]);
					i--;
				}
				cout<<b[0];
				for(int j = 1; j < n; j++)
					cout<<" "<<b[j];
				cout<<endl;
				return 0;
			}
		}
	}
	else{
		cout<<"Merge Sort"<<endl;
		int slen = 1;					// get slen. (max sorted segment length)
		bool sorted = 1;
		int t;
		for(int i = 2; i <= n; i = 2 * i){
			for(int j = 0; j < (n + i - 1) / i; j++){
				t = j * i + i / 2 - 1;
				if(t + 1 < n && b[t] > b[t + 1]){
					sorted = 0;
					break;
				}
			}
			if(! sorted){
				slen = i / 2;;
				break;
			}
			else
				slen = i;
		}
	//	cout<<"slen is " <<slen<<endl;
		merge_print(b, slen, n);	
	}
	
	return 0;
}
