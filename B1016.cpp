#include<iostream>
#include<string>
using namespace std;
int main(){
	string a, b;
	char da, db;
	cin>>a>>da>>b>>db;
	int pa = 0, pb = 0;
	for(int i = 0; i < a.length(); i++)
		if(a[i] == da)
			pa = 10 * pa + da - '0';
	for(int i = 0; i < b.length(); i++)
		if(b[i] == db)
			pb = 10 * pb + db - '0';
	cout << pa + pb << endl;

	return 0;
}
