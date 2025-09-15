#include <stdio.h>
void printTable(int n);
void printTable(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        int Table = i * n;
        printf("%d\n", Table);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    printTable(n);

    return 0;
}
