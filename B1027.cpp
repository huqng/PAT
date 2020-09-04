#include<iostream>
using namespace std;

int NumberOfStarsOfLine(int i, int size) {
	return abs(size - i - 1) * 2 + 1;
}

int main(){
	int n;
	char c;
	cin>>n>>c;
	int size, remain;
	for(int i = 1; i < 100; i++) {
		if(2 * i * i - 1 > n){
			size = i - 1;
			break;
		}
	}
	remain = n - 2 * size * size + 1;
	for(int i = 0; i < 2 * size - 1; i++){
		for(int j = 0; j < 2 * size - 1 - NumberOfStarsOfLine(i, size); j += 2)
			printf(" ");
		for(int j = 0; j < NumberOfStarsOfLine(i, size); j++)
			printf("%c", c);
//		for(int j = 0; j < 2 * size - 1 - NumberOfStarsOfLine(i, size); j += 2)
//			printf(" ");
		printf("\n");
	}
	cout<<remain<<endl;
	
	return 0;
}
