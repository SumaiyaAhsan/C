// Write a program in C to print characters of a string in reverse order.

#include <stdio.h>
int main()
{
    char arr[100];
    fgets(arr, 100, stdin);
    int len = strlen(arr);
    printf("reverse order:");
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", arr[i]);
    }
    printf("\n");

    return 0;
}