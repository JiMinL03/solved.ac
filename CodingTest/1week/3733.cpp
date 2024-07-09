#include <stdio.h>
int main() {
	int n;
	int s;
	int x;
	while (scanf("%d %d", &n, &s) != EOF) {
		x = s / (n + 1);
		printf("%d\n", x);
	}
	return 0;
}
