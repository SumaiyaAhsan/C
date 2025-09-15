// Write a program in C to read n number of values in an array list and display them in reverse order
#include <stdio.h>
int main()
{
    int arr[] = {11, 12, 13, 14, 15, 16, 17};
    int i;
    float arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("reverse order=");
    for (i = arr_size - 1; i >= 0; i--)
    {
        printf(" %d", arr[i]);
    }
    return 0;
}