#include <stdio.h>

#define SIZE 8

int main() {
    int binary[SIZE];
    int eight;
    scanf("%o", &eight);

    int index = 0;
    while (eight != 0) {
        binary[index] = eight % 2;
        eight /= 2;
        index++;
    }

    // 배열을 역순으로 출력
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]); 
    }
    printf("\n");

    return 0;
}
