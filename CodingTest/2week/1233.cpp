#include <stdio.h>
#include <string.h>
int main(void)
{
    int S1, S2, S3;
    //S1: 2 ≤ S1 ≤ 20
    //S2: 2 ≤ S2 ≤ 20
    //S3 : 2 ≤ S3 ≤ 40
    int sum[100] = {};
    scanf("%d %d %d", &S1, &S2, &S3);
    for (int i = 1; i <= S1; i++) {
        for (int j = 1; j <= S2; j++) {
            for (int k = 1; k <= S3; k++) {
                sum[i + j + k]++;
            }
        }
    }
    int max = 0;
    int value = 0;
    for (int i = 3; i <= S1 + S2 + S3; i++)
        if (sum[i] > max) {
            max = sum[i];
            value = i;
        }
    printf("%d", value);
    return 0;
}
