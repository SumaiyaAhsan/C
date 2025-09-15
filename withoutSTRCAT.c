#include <stdio.h>
int main()
{
    char str1[50] = "kim seok ";
    char str2[50] = "jin";
    int i = 0, len = 0, j = 0;
    while (str1[i] != '\0')
    {
        i++;
        len++;
    }
    while (str2[j] != '\0')
    {
        str1[len + j] = str2[j];
        j++;
    }
    printf("BTS member %s\n", str1);
}