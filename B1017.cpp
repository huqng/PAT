#include<iostream>
#include<string>
using namespace std;
int main(){
	char a[1000], q[1000];
	int b, r;
	int t;
	scanf("%s %d", &a, &b);
	
	int i  = 0;
	for(i = 0; a[i + 1] != 0; i++){
		a[i] -= '0';
		q[i] = a[i] / b;
		a[i + 1] += 10 * (a[i] - q[i] * b);
	}
	a[i] -= '0';
	q[i] = a[i] / b;
	r = a[i] - b * q[i];

	int j = 0;
	while(q[j] == 0)
		j++;
	if(j == i + 1)
		printf("0");
	else {
		for(; j < i + 1; j++)
			printf("%d", q[j]);
	}
	printf(" %d\n", r);
	return 0;
}
