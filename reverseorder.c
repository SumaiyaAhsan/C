// Write a program in C to take n number of values in an array and display them in reverse order
#include <stdio.h>
int main()
{
    int arr[10];+
    int i;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("reverse order=");
    for (i = 9; i >= 0; i--)
    {
        printf(" %d", arr[i]);
    }
    return 0;
}
