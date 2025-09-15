#include <stdio.h>
int main()
{
    int i, j, arr1[3][4];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("A[%d][%d]=", i, j);
            scanf("%d", &arr1[i][j]);
        }
        printf("\n");
    }
    printf("A=\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %d", arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}