#include<iostream>
#include<string>
#include<stack>
using namespace std;

void PrintPinyin(int n){
	switch(n){
		case 0:	cout<<"ling";	break;
		case 1:	cout<<"yi";	break;
		case 2:	cout<<"er";	break;
		case 3:	cout<<"san";	break;
		case 4:	cout<<"si";	break;
		case 5:	cout<<"wu";	break;
		case 6:	cout<<"liu";	break;
		case 7:	cout<<"qi";	break;
		case 8:	cout<<"ba";	break;
		case 9:	cout<<"jiu";	break;
	}
}

int main(){
	string str;
	cin >> str;
	int sum = 0;
	int i = 0;
	while(str[i] != 0){
		sum += (str[i] - '0');
		i++;
	}
	stack<int>s;
	while(sum){
		int t = sum % 10;
		s.push(t);
		sum /= 10;
	}
	if(s.top() == 0)
		PrintPinyin(0);
	else{
		bool first = 1;
	       	while(!s.empty()){
			int t = s.top();
			s.pop();
			if(!first)
				cout << '=';
			first = 0;
			PrintPinyin(t);
		}
	}
	cout<<endl;
	return 0;
}
