#include <stdio.h>
int main()
{
    int arr[100];
    int min, i, n;
    int second_min;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    second_min == arr[1];
    for (i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            second_min = min;
        }
        else if (arr[i] < second_min && arr[i] != min)
        {
            second_min = arr[i];
        }
    }

    printf("Min=%d\n", min);
    printf("Second Min=%d", second_min);
    return 0;
}
