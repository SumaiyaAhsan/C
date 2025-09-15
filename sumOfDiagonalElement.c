#include <stdio.h>
int main()
{
    int sum = 0, A[10][10];
    int i, j;
    // scanning matrix
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("A[%d][%d]=", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    // print A matrix
    printf("A=");
    for (i = 0; i < 3; i++)
    {
        printf("\t");
        for (j = 0; j < 3; j++)
        {
            printf(" %d", A[i][j]);
        }
        printf("\n");
    }
    // sum of diagonal
    printf("diagonal element are:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                printf(" %d", A[i][j]);
                sum = sum + A[i][j];
            }
        }
    }
    printf("\n");
    printf("Sum of diagonal element=%d\n", sum);

    return 0;
}