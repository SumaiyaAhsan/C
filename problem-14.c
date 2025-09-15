// Write a C program to calculate a bike’s average consumption from the given total distance (integer value) traveled (in km) and spent fuel (in litters, float number – 2 decimal points).
#include <stdio.h>
int main()
{
    int dis, fuel;
    printf("enter distance:");
    scanf("%d", &dis);
    printf("enter the amount of fuel:");
    scanf("%d", &fuel);
    float avg = ((float)dis / fuel);
    printf("average=%.2f", avg);
    return 0;
}