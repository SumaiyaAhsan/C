#include <stdio.h>
#include <string.h>
int main()
{
    char str1[30] = "tannu";
    char str2[30];
    int len = 0, i, j;
    while (str1[len] != 0)
    {

        len++;
    }
    for (j = 0, i = len - 1; i >= 0; i--, j++)
    {
        str2[j] = str1[i];
    }
    str2[j] = '\0';
    printf("%s\n", str2);
}