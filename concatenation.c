
#include <stdio.h>
int main()
{
    char s1[100];
    gets(s1);
    char s2[100];
    gets(s2);
    int i = 0, j = 0;
    while (s1[i] != '\0')
    {
        i++;
    }
    while (s2[j] != '\0')
    {
        s1[i] = s2[j];
        i++;
        j++;
    }

    printf("the concatenation :%s\n", s1);

    return 0;
}