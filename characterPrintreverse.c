// Write a program in C to print individual characters of a string in reverse order.

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--)
    {
        printf(" %c", str[i]);
    }
}