#include <stdio.h>


int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i\n", x);
    printf("y is %i\n", y);
    printf("\n");
    printf("Swapping ...\n");
    printf("\n");

    int tmp = x;
    x = y;
    y = tmp;

    printf("x is %i\n", x);
    printf("y is %i\n", y);
}
