// insert value 6 in the array
#include <stdio.h>
void insertval(int arr[], int n, int val, int idx)
{
    for (int i = 0; i < n; i++)
    {
        if (i == idx)
        {
            printf("%d%d", val, arr[i]);
        }
        else
        {
            printf("%d", arr[i]);
        }
    }
}

int main()
{
    int arr[] = {1, 2, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int val = 6;
    int idx = 2;
    insertval(arr, n, val, idx);

    return 0;
}