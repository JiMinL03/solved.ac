#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);
    int size[51] = {};
    int cluster =0 ;
    int need = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &size[i]);
    }
    scanf("%d", &cluster);
    for (int i = 0; i < n; i++) {
        if (size[i] % cluster == 0) {
            need += size[i] / cluster;
        }
        else {
            need += (size[i] / cluster)+1;
        }
    }
    printf("%d", need * cluster);
    return 0;
}
