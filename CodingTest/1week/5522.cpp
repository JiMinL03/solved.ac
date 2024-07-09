#include <stdio.h>
#include <string.h>
int main() {
	int score;
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &score);
		sum += score;
	}
	printf("%d", sum);
}
