#include <stdio.h>
#include <string.h>
int main() {
	int n_one, k_one, n_two, k_two;
	scanf("%d %d %d %d", &n_one, &k_one, &n_two, &k_two);
	printf("%d", n_one * k_one + n_two * k_two);
	return 0;
}
