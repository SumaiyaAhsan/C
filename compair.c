#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50];
    char str2[50];
    gets(str1);
    gets(str2);
    int d = strcmp(str1, str2);
    if (d == 0)
    {
        printf("string are equal");
    }
    else
    {
        printf("not equal");
    }
}