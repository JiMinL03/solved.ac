#include <stdio.h>
#include <string.h>
int main() {
	int size[3];
	for (int i = 0; i < 3; i++) {
		scanf("%d", &size[i]);
	}
	for (int i = 2; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (size[j] < size[j + 1]) {
				int temp = size[j];
				size[j] = size[j + 1];
				size[j + 1] = temp;
			}
		}
	}
	printf("%d", size[1]);
}
