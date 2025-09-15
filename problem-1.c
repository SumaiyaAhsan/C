// Write a C program to compute the sum of the two input values.If the two values are the same, then return triple their sum.
#include <stdio.h>
int main()
{
    int a, b;
    int sum;
    printf("enter the value of a and b:");
    scanf("%d%d", &a, &b);
    if (a == b)
    {
        sum = (a + b) * 3;
    }
    else
    {
        sum = a + b;
    }
    printf("%d", sum);
    return 0;
}