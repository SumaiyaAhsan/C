// Write a program in C to count the total number of words in a string.
#include <stdio.h>
int main()
{
    char arr[100];
    fgets(arr, 100, stdin);
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == ' ' || arr[i] == '\n')
        {
            count++;
        }
    }
    printf("total word:%d", count);

    return 0;
}