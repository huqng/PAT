#include<iostream>
#include<algorithm>
#include<iomanip>
struct item{
	//int	storage;
	double	storage;
	double	price;
};

bool cmpg(item&a, item&b){
	return a.price / a.storage > b.price / b.storage;
}
using namespace std;
int main(){
	int n, d;
	cin>>n>>d;
	struct item* items = new item[n];
	for(int i = 0; i < n; i++)
		cin>>items[i].storage;
	for(int i = 0; i < n; i++)
		cin>>items[i].price;
	sort(items, items + n, cmpg);
	double profit = 0;
	int sum = 0; 
	for(int i = 0; i < n; i++){
		if(sum + items[i].storage > d) {
			profit += (d - sum) * (items[i].price / items[i].storage);
			break;
		}
		else {
			sum += items[i].storage;
			profit += items[i].price;
		}
	}
	cout<<fixed<<setprecision(2)<<profit<<endl;
	return 0;
}
