#include <stdio.h>

int main(void)
{   
    printf("\n");
    printf("FOR LOOP\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%i\n", i);
    }

    printf("\n");
    printf("WHILE LOOP\n");

    int j = 1;
    while (j <= 10)
    {
        printf("%i\n", j);
        j++;
    }

    printf("\n");
    printf("DO WHILE LOOP\n");
    int k = 1;
    do
    {
        printf("%i\n", k);
        k++;
    } while (k <= 10);
}
