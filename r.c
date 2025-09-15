#include <stdio.h>
int main()
{
    int row, col, space;
    for (row = 1; row <= 4; row++)
    {
        for (space = 1; space <= row; space++)
        {
            printf(" ");
        }
        for (col = 1; col <= 4 - row + 1; col++)
        {
            printf("1");
        }
        printf("\n");
    }
    return 0;
}