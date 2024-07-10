#include <stdio.h>
#include <string.h>

int main() {
    char chessBoard[8][8];
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            scanf(" %c", &chessBoard[i][j]);
        }
    }
    int count=0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (chessBoard[i][j] == 'F') {
                if (i % 2 == 0 && j % 2 == 0) {
                    count++;
                }
                else if (i % 2 == 1 && j % 2 == 1) {
                    count++;
                }
            }
        }
    }
    printf("%d", count);
    return 0;
}
