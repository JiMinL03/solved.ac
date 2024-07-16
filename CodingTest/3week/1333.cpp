#include <stdio.h>
#include <stdbool.h>

int main() {
    int N, L, D;
    scanf("%d %d %d", &N, &L, &D);

    bool check, bell;
    for (int i = 0; i < (L + 5) * N; i++) {
        if (i % (L + 5) < L) 
            check = true;
        else 
            check = false;

        if (i % D == 0) 
            bell = true;
        else  
            bell = false;

        if (check == false && bell == true) {  
            printf("%d", i);
            return 0;
        }
    }
    for (int i = (L + 5) * N; ; i++) {
        if (i % D == 0) {
            printf("%d", i);
            return 0;
        }
    }
    return 0;
}
