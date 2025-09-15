#include <stdio.h>

int main()
{
    int a[10] = {10, 20, 30, 40};
    int *ptr;
    ptr = &a[0];
    printf("A=");
    for (int i = 0; i < 4; i++)
    {
        printf(" %d", *ptr);
        ptr++;
    }

    return 0;
}