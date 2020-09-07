#include<iostream>
#include<string>
using namespace std;

struct stu{
	string number;
	int seat;
};

int main(){
	int n;
	struct stu *st;
	cin>>n;
	st = new struct stu[n];
	string tmp;
	int index, seat;
	for(int i = 0; i < n; i++){
		cin>>tmp>>index>>seat;
		st[index - 1] = {tmp, seat};
	}

	int k;
	cin>>k;
	for(int i = 0; i < k; i++){
		cin>>index;
		cout<<st[index - 1].number<<" "<<st[index - 1].seat<<endl;
	}
	return 0;
}		
		
