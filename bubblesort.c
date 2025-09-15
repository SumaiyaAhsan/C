// Write a program in C to sort the elements of the array in ascending  order.
#include <stdio.h>
void ascendingOrder(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {2, 7, 4, 5, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    ascendingOrder(arr, n);
    printArray(arr, n);
    return 0;
}