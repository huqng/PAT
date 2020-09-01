#include<iostream>
#include<string>
#include<vector>
using namespace std;
class student{
public:
	string name, number;
       	int score;
};
int main(){
	vector<student*>students;
	int n, i = 0;
	cin>>n;
	while(i < n){
		student* st = new student;
		cin>>st->name>>st->number>>st->score;
		students.push_back(st);
		i++;
	}
	int max = 0, min = 0;
	for(int i = 0; i < n; i++){
		if(students[i]->score > students[max]->score)
			max = i;
		else if(students[i]->score < students[min]->score)
			min = i;
	}
	cout<<students[max]->name<<" "<<students[max]->number<<endl;
	cout<<students[min]->name<<" "<<students[min]->number<<endl;
	return 0;
}
