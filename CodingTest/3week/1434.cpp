#include <stdio.h>
#include <string.h>

int main() {
    int N,M;
    scanf("%d %d", &N, &M);
    int A[51];
    int B[51];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < M; i++) {
        scanf("%d", &B[i]);
    }
    int count = 0;
    for (int i = 0; i < M; i++) {
        while (count<N && B[i]>0) {
            if (A[count] >= B[i]) {
                A[count] -= B[i];
                B[i] = 0;
            }
            else {
                B[i] -= A[count];
                A[count] = 0;
                count++;
            }
        }
    }

    int box = 0;
    for (int i = 0; i < N; i++) {
        box += A[i];
    }
    printf("%d", box);
    return 0;
}
