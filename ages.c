#include <stdio.h>


int main(void)
{
    int n = 4;
    int ages[n];

    for (int i = 0; i < n; i++)
    {
        ages[i] = 20;
    }

    for (int i =0; i < n; i++)
    {
        printf("%i\n", ages[i]);
    }
}
