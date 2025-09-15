#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i;

    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
    {
        if (str1[i] < str2[i])
        {
            printf("str1 is less than str2\n");
            break;
        }
        else if (str1[i] > str2[i])
        {
            printf("str1 is greater than str2\n");
            break;
        }
        else
        {
            printf("str1 is equal to str2\n");
            break;
        }
    }

    return 0;
}
