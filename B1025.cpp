#include<iostream>
#include<iomanip>
using namespace std;
struct Node{
	int data;
	int next;
};
int main(){
	int a, n, k;
	cin>>a>>n>>k; 
	struct Node* arr = new struct Node[100002];
	int addr;
	for(int i = 0; i < n; i++){
	//	cin>>addr;					// TE if using iostream, 100ms if using cstdio
	//	cin>>arr[addr].data>>arr[addr].next;
		scanf("%d", &addr);
		scanf("%d %d", &arr[addr].data, &arr[addr].next);
	}

	arr[100001].next = a;

	int h = 100001;
	int p, tmp;
	int cnt = 0;
	int head = h;

	p = arr[100001].next;
	while(p != -1){
		p = arr[p].next;
		cnt++;
	}
	for(int i = 0; i < cnt / k; i++){
		int back = arr[head].next;
		p = head;
		for(int j = 0; j < k; j++)
			p = arr[p].next;
		for(int j = 0; j < k - 1; j++){
			tmp = arr[head].next;
			arr[head].next = arr[arr[head].next].next;
			arr[tmp].next = arr[p].next;
			arr[p].next = tmp;
		}
		head = back;
	}
	
//	cout<<endl;

	p = arr[100001].next;
	while(p != -1){
//		cout<<setw(5)<<setfill('0')<<p<<" "<<arr[p].data<<" ";
		printf("%05d %d ", p, arr[p].data);
		if(arr[p].next >= 0)
//			cout<<setw(5)<<setfill('0')<<arr[p].next<<endl;
			printf("%05d\n", arr[p].next);
		else
//			cout<<arr[p].next<<endl;
			printf("%d\n", arr[p].next);
		p = arr[p].next;
	}
	return 0;
}
