// Write a program in C to find the length of a string without using library functions.
#include <stdio.h>
int main()
{
    char str[100];
    int i = 0, len = 0;
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    while (str[i] != '\0')
    {
        i++;
        len++;
    }
    printf("length of the sentence:%d\n", len);
    return 0;
}
