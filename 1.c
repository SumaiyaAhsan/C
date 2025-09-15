#include <stdio.h>
int main()
{
    int x=1, y=2, z=3;
    if (scanf("%d%d", &x, &y))
    {
        printf("%d", x + y);
    }
    else if (scanf("%d%d", &y, &z))
    {
        printf("%d", z - y);
    }
    else
    {
        int y=(x+z)/2;
        printf("%d", z);
    }
    return 0;
}