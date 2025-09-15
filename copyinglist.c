// Write a program in C to copy the elements of one array into another array in inverse order.
#include <stdio.h>
int main()
{
    int arr1[5];
    int arr2[5];
    int i, j, k;
    for (k = 0; k < 5; k++)
    {
        scanf("%d", &arr1[k]);
    }
    printf("ARR1=\n");
    for (k = 0; k < 5; k++)
    {
        printf(" %d", arr1[k]);
    }
    for (i = 0, j = 4; i < 5, j >= 0; i++, j--)
    {
        arr2[i] = arr1[j];
    }
    printf("\ncopying Arr:\n");
    for (i = 0; i < 5; i++)
    {
        printf(" %d", arr2[i]);
    }

    return 0;
}