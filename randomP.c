#include <stdio.h>
int main()
{
    int row, col;
    for (row = 1; row <= 3; row++)
    {
        for (col = 1; col <= (3 - row) + 1; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (row = 1; row <= 1; row++)
    {
        for (col = 1; col <= 4; col++)
        {

            printf("*");
        }
        printf("\n");
        printf(" *\n");
    }
    return 0;
}