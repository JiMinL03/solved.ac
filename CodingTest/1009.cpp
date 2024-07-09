#include <stdio.h>
int main() { 
	int t, a, b, n;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		n = 0;
		scanf("%d %d", &a, &b);
		//총 데이터의 개수는 a의 b제곱
		for (int j = 0; j < b; j++) {
			n *= a;
			printf("%d", n%10);
		}
	}
	return 0;
}