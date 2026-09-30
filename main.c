#include <stdio.h>

int main(void)
{
    int input_sec;
    int hour, min, sec;

    printf("input seconds : ");
    scanf("%d", &input_sec);

    hour = input_sec / 3600;
    min = (input_sec % 3600) / 60;
    sec = input_sec % 60;

    printf("%d:%d:%d\n", hour, min, sec);

    return 0;
}