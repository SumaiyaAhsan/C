
// multiplication of matrix
#include <stdio.h>
int main()
{
    int A[10][10], B[10][10], result[10][10], i, j, k, r1, c1, r2, c2, sum = 0;
    printf("enter first matrix row and col:");
    scanf("%d %d", &r1, &c1);
    printf("enter second matrix row and col:");
    scanf("%d %d", &r2, &c2);
    while (r1 != c2)
    {
        printf("Error!!");
        printf("enter again\n");
        printf("enter first matrix row and col:");
        scanf("%d %d", &r1, &c1);
        printf("enter second matrix row and col:");
        scanf("%d %d", &r2, &c2);
    }
    // scaning 1st matrix
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("A[%d][%d]=", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n");

    // scaning 2nd matrix
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("B[%d][%d]=", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    // printing 1st matrix
    printf("A=");
    for (i = 0; i < r1; i++)
    {
        printf("\t");
        for (j = 0; j < c1; j++)
        {
            printf(" %d", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    // printing 2nd matrix
    printf("B=");
    for (i = 0; i < r2; i++)
    {
        printf("\t");
        for (j = 0; j < c2; j++)
        {
            printf(" %d", B[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    // multiplying A and B  matrix

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            for (k = 0; k < c1; k++)
            {
                sum = sum + A[i][k] * B[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
    // print the result
    printf("AB=");
    for (i = 0; i < r1; i++)
    {
        printf("\t");
        for (j = 0; j < c2; j++)
        {
            printf(" %d", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
