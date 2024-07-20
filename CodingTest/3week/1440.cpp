#include <stdio.h>
#include <string.h>

int main() {
    int a, b, c;
    int count = 0;
    scanf("%d:%d:%d", &a, &b, &c);
    int arr[3] = { a,b,c };
    for (int i = 0; i < 3; i++) {
        if (arr[i] >= 0 && arr[i] <= 59) {
            if (arr[i] * 3600 <= 43200 && arr[i] > 0) {
                count++;
            }
        }
    }
    printf("%d", count * 2);
    return 0;
}
