#include <stdio.h>
#include <stdbool.h>  // bool 타입을 사용하기 위해 필요

int main() {
    int o, w;
    char action;
    int n;
    int count = 1;

    while (1) {
        scanf("%d %d", &o, &w);
        if (o == 0 && w == 0) break;

        bool dead = false;

        while (1) {
            scanf(" %c %d", &action, &n);  // 공백 추가하여 개행 문자 무시
            if (action == '#' && n == 0) break;

            if (dead) continue;  // dead가 true일 때 계속 넘어감

            if (action == 'F') {
                w += n;
            } else if (action == 'E') {
                w -= n;
            }

            if (w <= 0) {
                dead = true;
            }
        }

        printf("%d ", count);
        if (w <= 0) {
            printf("RIP\n");
        } else if (w > o / 2 && w < o * 2) {
            printf(":-)\n");
        } else {
            printf(":-(\n");
        }

        count++;
    }

    return 0;
}
