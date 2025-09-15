#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    if (y % x != 0)
    {
        printf("%d\n", x - (y % x));
    }
    else
    {
        printf("0\n");
    }
    return 0;
}