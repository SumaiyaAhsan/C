// Write a program in C to copy the elements of one array into another array.
#include <stdio.h>
int main()
{
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7};
    int i;

    for (i = 0; i < 6; i++)
    {
        printf("ARR1=%d", arr1[i]);
    }
    return 0;
}