#include <stdio.h>
#include <string.h>
int main() {
	while (1) {
		int t;
		scanf("%d", &t);
		if (t == 0) {
			break;
		}
		else {
			int size = 0;
			for (int i = 0; i < t; i++) {
				size += t - i;
			}
			printf("%d\n", size);
		}
	}
}
