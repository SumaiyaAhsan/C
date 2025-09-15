#include <stdio.h>
int triangle1(int x, int y, int z)
{

    return (x + y > z && y + z > x && z + x > y);
}
int triangle2(int x, int y, int z)
{

    return (x + y == z || x + z == y || y + z == x);
}
int main()
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (triangle1(a, b, c) || triangle1(a, b, d) || triangle1(b, c, d) || triangle1(c, b, d))
    {
        printf("TRIANGLE\n");
    }
    else if (triangle2(a, b, c) || triangle2(a, b, d) || triangle2(b, c, d) || triangle2(c, b, d))
    {
        printf("SEGMENT\n");
    }
    else
    {
        printf("IMPOSSIBLE\n");
    }
    return 0;
}