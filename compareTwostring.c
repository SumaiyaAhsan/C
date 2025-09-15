//  Write a program in C to compare two strings without using string library functions.
#include <stdio.h>
int main()
{
    char arr1[100];
    fgets(arr1, 100, stdin);
    char arr2[100];
    fgets(arr2, 100, stdin);

    for (int i = 0, j = 0; arr1[i] != '\0', arr2[i] != '\0'; i++, j++)
    {
        if (arr1[i] < arr2[j])
        {
            printf("1st str is less than 2nd str\n");
            break;
        }
        else if (arr1[i] > arr2[j])
        {
            printf("1st str is greater than 2nd str\n");
            break;
        }
        else
        {
            printf("equal\n");
            break;
        }
    }

    return 0;
}