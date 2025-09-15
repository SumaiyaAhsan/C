#include <stdio.h>
int main()
{
    int w1, w2, i1, i2, sum, s;
    float average;
    printf("enter the value of first weight=");
    scanf("%d", &w1);
    printf("number of item:");
    scanf("%d", &i1);
    printf("enter the value of second weight=");
    scanf("%d", &w2);
    printf("number of item:");
    scanf("%d", &i2);
    sum = (w1 * i1) + (w2 * i2);
    s = i1 + i2;
    average = (float)sum / s;
    printf("Average=%f", average);
    return 0;
}