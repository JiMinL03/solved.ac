#include <stdio.h>
int main() {
	int n, f;
	int count = 0;
	scanf("%d\n%d", &n, &f);

	n = n / 100;
	n = n * 100;

	while (n%f !=0) {
		n++;
		count++;
	}

	printf("%02d", count);
}
