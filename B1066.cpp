#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int m, n, a, b, t;
	cin>>m>>n>>a>>b>>t;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			int c;
			//cin>>c;
            scanf("%d", &c);
			if(c >= a && c <= b)
				c = t;
			//cout<<setw(3)<<setfill('0')<<c;
            printf("%03d", c);
			if(j == n - 1)
				cout<<endl;
			else
				cout<<" ";
		}
	}
					
	return 0;
}
