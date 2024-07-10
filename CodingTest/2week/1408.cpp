#include <stdio.h>
#include <string.h>
#define SIZE 8
int main(void)
{
    int h, m, s;
    scanf("%d:%d:%d", &h, &m, &s);
    int current_Time = s + m * 60 + h * 3600;

    h = 0; m = 0; s = 0;
    scanf("%d:%d:%d", &h, &m, &s);
    int start_Time = s + m * 60 + h * 3600;

    if (current_Time > start_Time)
        start_Time += 24 * 60 * 60;

    int value = start_Time - current_Time;

    h = value / 3600, value %= 3600;
    m = value / 60, value %= 60;
    s = value;

    printf("%02d:%02d:%02d", h, m, s);
    return 0;
}
