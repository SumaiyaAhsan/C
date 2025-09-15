
// Write a program in C to separate individual characters from a string..
#include <stdio.h>
int main()
{
    char str[100];
    int i = 0;
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {

        printf(" %c", str[i]);
        i++;
    }

    return 0;
}