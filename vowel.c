// Write a program in C to count the total number of vowels or consonants in a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string:");
    fgets(str, 100, stdin);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowels++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            consonants++;
        }
    }
    printf("Total vowels: %d\n", vowels);
    printf("Total consonants: %d\n", consonants);

    return 0;
}
