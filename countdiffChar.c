// Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include <stdio.h>

int main()
{
    char name[100];
    fgets(name, 100, stdin);
    int alphabets = 0, digits = 0, special_characters = 0, space = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        if ((name[i] >= 'a' && name[i] <= 'z') || (name[i] >= 'A' && name[i] <= 'Z'))
        {
            alphabets++;
        }
        else if (name[i] >= '0' && name[i] <= '9')
        {
            digits++;
        }
        else if (name[i] == ' ')
        {
            space++;
        }
        else
        {
            special_characters++;
        }
    }

    printf("number of alphabets:%d\n", alphabets);
    printf("number of digits:%d\n", digits);
    printf("number of space:%d\n", space);

    return 0;
}