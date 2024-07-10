#include <stdio.h>
#include <string.h>

int main() {
    char A[10001], B[10001];
    long long sum = 0;
    scanf("%s %s", A, B);

    for (int i = 0; i < strlen(A); i++) {
        for (int j = 0; j < strlen(B); j++) {
            sum += (A[i] - '0') * (B[j] - '0');
            //A[i] - '0'는 문자를 정수로 변환
            //ASCII 코드
        }
    }

    printf("%lld\n", sum);
    return 0;
}
