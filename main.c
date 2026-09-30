#include <stdio.h>

int main(void)
{
    char c;

    printf("input an alphabet : ");
    scanf("%c", &c);

    c = c + 1;

    printf("The next alphabet is %c\n", c);

    return 0;
}