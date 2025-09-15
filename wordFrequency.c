// Write a program in C to find the frequency of characters

#include <stdio.h>
#include <string.h>

int main()
{
    char arr[100];
    char ch;
    int count = 0;
    printf("Enter a string:");
    fgets(arr, 100, stdin);
    printf("Enter a character:");
    scanf("%c", &ch);
    for (int i = 0; arr[i] != '\0'; i++)
    {

        if (arr[i] == ch)
        {
            count++;
        }
    }
    printf("the frequency of give character: %d\n", count);
    return 0;
}
