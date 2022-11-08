#include <stdio.h>


int main(void)
{
    int num = -1;
    if (0 <= num && num <= 3)
    {
        printf("num is low\n");
    } 
    else if (4 <= num && num <= 7) 
    {
        printf("num is medium\n");
    }
    else if (8 <= num && num <= 10)
    {
        printf("num is high\n");
    }
    else 
    {
        printf("unknown num\n");
    }
}
