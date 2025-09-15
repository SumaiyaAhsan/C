#include <stdio.h>
int main()
{
    int arr[100];
    int max, i, n;
    int second_max;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    second_max = arr[1];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            second_max = max;
            max = arr[i];
        }
        else if (arr[i] > second_max && arr[i] != max)
        {
            second_max = arr[i];
        }
    }

    printf("Max=%d\n", max);
    printf("Second Max=%d", second_max);
    return 0;
}