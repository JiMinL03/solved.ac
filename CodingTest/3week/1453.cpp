#include <stdio.h>
#include <string.h>

int main() {
    int N;
    int computer[101] = { 0 };
    int want[100];
    scanf("%d", &N);
    int count = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &want[i]);
    }
    for (int i = 0; i < N; i++) {
        if (computer[want[i]] == 0) {
            computer[want[i]] = 1;
        }
        else
            count++;
    }
    printf("%d", count);
    return 0;
}
