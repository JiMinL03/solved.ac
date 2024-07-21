#include <stdio.h>

int main() {
    int n, m, l;
    scanf("%d %d %d", &n, &m, &l);

    int counts[1000] = { 0 };
    int current = 1; 
    counts[current - 1] = 1; 

    int pass_count = 0;

    while (1) {
        if (counts[current - 1] == m) {
            break;
        }

        if (counts[current - 1] % 2 == 1) {
            // 시계 방향으로 l만큼 이동
            current = (current + l - 1) % n + 1;
        }
        else {
            // 반시계 방향으로 l만큼 이동
            current = (current - l - 1 + n) % n + 1;
        }

        counts[current - 1]++; 
        pass_count++; 
    }

    printf("%d\n", pass_count);
    return 0;
}
