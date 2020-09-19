#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class student{
	string name;
	int height;
public:
	student(){	cin>>name>>height;	}
	string getName(){	return name;	}
	int getHeight(){	return height;	}
};

bool cmp(student* s1, student* s2){
	if(s1->getHeight() > s2->getHeight())		return true;
	else if(s1->getHeight() == s2->getHeight() && s1->getName() < s2->getName())
		return true;
	else	return false;
}

int StuNumOfRow(int RowId, int n, int k){
	if(RowId) return n / k;
	else return n - n / k * (k - 1);
}
int IdOfStu(int RowId, int StuCnt, int n, int k){
	int StuId;
	int sum = StuNumOfRow(RowId, n, k);
	if(StuCnt < sum / 2)	StuId = sum - 1 - (sum % 2) - 2 * StuCnt;
	else			StuId = StuCnt * 2 - (sum -(sum % 2));
	for(int i = 0; i < RowId; i++)	StuId += StuNumOfRow(i, n, k);
	return StuId;
}
int main(){
	int n, k;
	cin>>n>>k;
	vector<student*>v;
	student* t;
	for(int i = 0; i < n; i++){
		t = new student;
		v.push_back(t);
	}
	sort(v.begin(), v.end(), cmp);
	int cnt = 0;
	for(int i = 0; i < k; i++){				// for k rows
		for(int j = 0; j < StuNumOfRow(i, n, k); j++){	// for each student
			if(j != 0)
				cout<<" ";
			cout<<v[IdOfStu(i, j, n, k)]->getName();		
		}
		cout<<endl;
	}
	return 0;
}
