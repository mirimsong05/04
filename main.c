#include <stdio.h>

int main(void)
{
    int input_sec;
    int min, sec;

    printf("input seconds : ");
    scanf("%d", &input_sec);

    min = input_sec / 60;
    sec = input_sec % 60;

    printf("%d:%d\n", min, sec);

    return 0;
}