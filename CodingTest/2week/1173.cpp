#include <stdio.h>
#include <string.h>

int main() {
    int N, m, M, T, R;
    scanf("%d %d %d %d %d", &N, &m, &M, &T, &R);
    int cal = 0;
    int time = 0;
    int p = m;
    if (m + T > M) {
        printf("%d", -1);
        return 0;
    }
    while (1) {//운동시간을 다 채울 때까지 반복문
        if (p+ T <= M) {//만약 현재 맥박이 최대맥박보다 적다면 운동
            cal++;
            p += T;
        }
        else {
            p -= R;
            if (p < m) p = m;
        }
        time++;
        if (cal == N) {
            break;
        }
    }
    printf("%d", time);
    return 0;
}
