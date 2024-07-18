#include <stdio.h>
#include <string.h>
#define SIZE 8
int main(void)
{
    int N, Q;
    scanf("%d %d", &N, &Q);
    int n_Time[101];
    int q_Time[1001];
    for (int i = 0; i < N; i++) {
        scanf("%d", &n_Time[i]);
    }
    for (int i = 0; i < Q; i++) {
        scanf("%d", &q_Time[i]);
    }
    //-----------------------------------
    int cum_Time[101] = { 0 };
    cum_Time[0] = n_Time[0];
    for (int i = 1; i < N; i++) {
        cum_Time[i] = cum_Time[i - 1] + n_Time[i];
    }

    // 질문 시간에 맞는 악보 번호 출력
    for (int i = 0; i < Q; i++) {
        int q = q_Time[i];
        for (int j = 0; j < N; j++) {
            if (j == 0) {
                // 첫 악보의 시작 시간과 끝 시간 비교
                if (q < cum_Time[j]) {
                    printf("%d\n", j + 1);
                    break;
                }
            }
            else {
                // 나머지 악보의 시작 시간과 끝 시간 비교
                if (q < cum_Time[j] && q >= cum_Time[j - 1]) {
                    printf("%d\n", j + 1);
                    break;
                }
            }
        }
    }
    return 0;
}
