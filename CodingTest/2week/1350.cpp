#include <stdio.h>

int main() {
    int diskSpace = 0, a;
    int n, cluster[51], disk;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &cluster[i]);
    }
    scanf("%d", &disk);
    for (int i = 0; i < n; i++) {
        if (cluster[i] > disk && cluster[i] > 0) {
            if (cluster[i]%disk==0 ) {
                a = cluster[i] / disk;
                diskSpace += disk * a;
            }
            else {
                a = cluster[i] / disk;
                a += 1;
                diskSpace += disk * a;
            }
        }
        else if (cluster[i]>0 && cluster[i]<disk) {
            diskSpace += disk;
        }
    }
    printf("%d", diskSpace);
    return 0;
}
