#include <stdio.h>
int main()
{
    int x, y;
    int *ptr1, *ptr2;
    printf("enter value:");
    scanf("%d%d", &x, &y);
    ptr1 = &x;
    ptr2 = &y;
    int sum = *ptr1 + *ptr2;
    printf("Sum=%u", sum);
    return 0;
}