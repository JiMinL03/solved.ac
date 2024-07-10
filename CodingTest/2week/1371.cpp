#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[5001];
    int aph[26] = { 0 };
    int count = 0;

    while (scanf("%[^\n]%*c", input) == 1) {
        for (int i = 0; input[i]; i++) {
            if (input[i] >= 'a' && input[i] <= 'z') {
                aph[input[i] - 'a']++;
                if (aph[input[i] - 'a'] > count) {
                    count = aph[input[i] - 'a'];
                }
            }
        }
    }

    for (int i = 0; i < 26; i++) {
        if (aph[i] == count)
            printf("%c", i + 'a');
    }
    return 0;
}
