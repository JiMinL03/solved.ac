#include <stdio.h>
#include <string.h>

int main() {
    int count = 0, len;
    char string[1000000];
    scanf("%[^\n]s", string);

	if (string[0] != ' ') {
		++count; //맨 처음 공백
	}

	int i = 0;
	while (string[i]) {
		if (string[i] == ' ') {
			++count;
		}
		++i;
	}

	if (string[i - 1] == ' ') 
		--count; //맨 마지막 공백

    printf("%d", count);
    return 0;
}
