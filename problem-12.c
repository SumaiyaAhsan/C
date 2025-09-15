// Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. Print the ID and salary (with two decimal places) of the employee for a particular month.
#include <stdio.h>
int main()
{
    int employee_ID;
    int t, hr, ID, amount;
    printf("enter the ID\n:");
    scanf("%d", &ID);
    printf("total worked hours in a day\n:");
    scanf("%d", &hr);

    printf(" salary of the employee for an hour:\n");
    scanf("%d", &amount);
    int D1 = (hr * amount);
    int m1 = (30 * D1);
    printf(" salary of the employee for a day:%d", D1);
    printf(" \n%d id's salary of the employee for a particular month:%d", ID, m1);
    printf("\n");

    return 0;
}