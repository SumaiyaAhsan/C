#include <stdio.h>
int main()
{
    int A[10][10];
    int i, j, sumOf_upper = 0, sumOf_lower = 0;

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
    // sum of upper and lower triangle

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i < j)
            {
                printf("upper element");
                printf(" %d\n", A[i][j]);

                sumOf_upper = sumOf_upper + A[i][j];
            }
            if (i > j)
            {
                printf("lower element");
                printf(" %d\n", A[i][j]);
                sumOf_lower = sumOf_lower + A[i][j];
            }
        }
    }

    printf("Sum of upper triangle:%d\n", sumOf_upper);
    printf("Sum of lower triangle:%d\n", sumOf_lower);
    return 0;
}
