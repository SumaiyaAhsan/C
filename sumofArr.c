// Write a program in C to find the sum of all elements of the array.
#include <stdio.h>
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, sum = 0;
    for (i = 0; i < size; i++)
    {

        sum = sum + arr[i];
    }
    printf("Sum=%d\n", sum);
    return 0;
}