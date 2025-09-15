// Write a program in C to find the length of a string without using library functions.
#include <stdio.h>
int countlength(char name[]);
int countlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count - 1;
}
int main()
{
    char name[100];
    fgets(name, 100, stdin);
    printf("length of the string:%d\n", countlength(name));

    return 0;
}