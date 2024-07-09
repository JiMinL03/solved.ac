#include <stdio.h>
#include <string.h>

int color();

int main() {
    int count;
    int value = 0; // 변수 초기화

    for (int i = 0; i < 3; i++) {
        count = color();
        if (i == 0) {
            value += count * 10;
        }
        else if (i == 1) {
            value += count;
        }
        else if (i == 2 && count != 0) {
            for (int j = 0; j < count; j++) {
                value *= 10;
            }
        }
    }
    printf("%d\n", value); // 결과 출력
    return 0;
}

int color() {
    char color[7];
    scanf("%6s", color); // 입력 길이 제한

    if (strcmp(color, "black") == 0)
        return 0;
    else if (strcmp(color, "brown") == 0)
        return 1;
    else if (strcmp(color, "red") == 0)
        return 2;
    else if (strcmp(color, "orange") == 0)
        return 3;
    else if (strcmp(color, "yellow") == 0)
        return 4;
    else if (strcmp(color, "green") == 0)
        return 5;
    else if (strcmp(color, "blue") == 0)
        return 6;
    else if (strcmp(color, "violet") == 0)
        return 7;
    else if (strcmp(color, "grey") == 0)
        return 8;
    else if (strcmp(color, "white") == 0)
        return 9;
    else {
        return -1; 
    }
}
