#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Problem{
	int number;
	int score;
	int options;
	int roptions;
	int answer;
	int wcnt;
public:
	Problem(int num){
		wcnt = 0;
		answer = 0;
		number = num;
		cin>>score>>options>>roptions;
		char t;
		for(int i = 0; i < roptions; i++){
			int p = 1;
			cin>>t;
			p <<= (t - 'a');
			answer |= p;			
		}
	}
	int getScore(){		return score;		}
	int getWcnt(){		return wcnt;		}
	int getNumber(){	return number;		}
	bool IsRight(int ans){
		if(ans == answer)
			return true;
		else
			wcnt++;
		return false;
	}
};
	
bool cmp(Problem& a, Problem& b){
	if(a.getWcnt() > b.getWcnt())
		return true;
	else if(a.getWcnt() == b.getWcnt() && a.getNumber() < b.getNumber())
		return true;
	else
		return false;
}

int main(){
	int n, m;	// 0~1000 & 0~100
	cin>>n>>m;
	vector<Problem>v;
	Problem *t;
	for(int i = 0; i < m; i++){
		t = new Problem(i + 1);
		v.push_back(*t);
	}
	for(int i = 0; i < n; i++){			// for each student
		char c;
		int t;
		int scoresum = 0;
		for(int j = 0; j < m; j++){		// for each problems
			int ans = 0;
			cin>>c>>t;
			for(int k = 0; k < t + 1; k++){	// for each selection?
				cin>>c;
				if(c != ')')
					ans |= (1<<(c - 'a'));
			}
			if(v[j].IsRight(ans))
				scoresum += v[j].getScore();
		}
		cout<<scoresum<<endl;	
	}
	sort(v.begin(), v.end(), cmp);	
	if(v[0].getWcnt() == 0)
		cout<<"Too simple"<<endl;
	else{
		int max = v[0].getWcnt();
		cout<<max;
		for(int i = 0; i < v.size() && v[i].getWcnt() == max; i++)
			cout<<" "<<v[i].getNumber();
		cout<<endl;
	}
			
	return 0;
}



































