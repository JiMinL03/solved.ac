#include <stdio.h>
#include <string.h>
int main(void)
{
    char player[151][30];
    char alpha[26] = {};
    int max = 0;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", player[i]);
    }
    for (int i = 0; i < n; i++) {
        alpha[player[i][0] - 97]++;
    }
    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (alpha[i] >= 5) {
            printf("%c", i + 97);
            count++;
        }
    }
    if (count < 1) {
        printf("PREDAJA");
    }
    return 0;
}
