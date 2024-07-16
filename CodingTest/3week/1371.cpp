#include <stdio.h>
#include <string.h>

int main() {
    char input[5001];
    int alpha[26] = { 0 };
    int count = 0;

    while (fgets(input, sizeof(input), stdin)) {
        // 줄바꿈 문자를 만나면 입력 종료
        if (input[0] == '\n') {
            break;
        }

        for (int i = 0; input[i]; i++) {
            if (input[i] >= 'a' && input[i] <= 'z') {
                alpha[input[i] - 'a']++;
                if (alpha[input[i] - 'a'] > count) {
                    count = alpha[input[i] - 'a'];
                }
            }
        }
    }

    for (int i = 0; i < 26; i++) {
        if (alpha[i] == count) {
            printf("%c", i + 'a');
        }
    }
    return 0;
}
