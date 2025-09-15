#include <stdio.h>
int main()
{
    int i, j, n;
    int count = 0;
    int arr[100];
    printf("enter the size of  array:");
    scanf("%d", &n);
    printf("input the element:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    printf("the number of duplicate number=%d", count);
    return 0;
}