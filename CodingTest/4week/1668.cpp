#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int height[51];
    for (int i = 0; i < n; i++) {
        scanf("%d", &height[i]);
    }

    int left = 0, right = 0;
    int maxLeft = 0, maxRight = 0;

    for (int i = 0; i < n; i++) {
        if (height[i] > maxLeft) {
            left++;
            maxLeft = height[i];
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (height[i] > maxRight) {
            right++;
            maxRight = height[i];
        }
    }

    printf("%d\n", left);
    printf("%d", right);

    return 0;
}
