#include <stdio.h>
void subarray(int arr[], int n, int k)
{

    for (int j = 0; j <= n - k; j++)
    {
        int max = arr[j];
        for (int p = j; p < j + k; p++)
        {
            if (arr[p] > max)
            {
                max = arr[p];
            }
        }
        printf(" %d", max);
    }
}
int main()
{
    int n, k;
    scanf("%d", &n);
    int arr[100000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    subarray(arr, n, k);
    return 0;
}