#include <stdio.h>
int main() {
	int t;

	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		int n = a;
		for (int j = 1; j < b; j++) {//총 데이터의 개수는 a의 b제곱
			n = n * a % 10;
		}
		if (n % 10 == 0) // 만약 10번째 컴퓨터일경우 
			printf("%d\n", 10);
		else 
		printf("%d\n", n % 10);
	}
	return 0;
}
