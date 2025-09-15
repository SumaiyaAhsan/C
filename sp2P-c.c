#include <stdio.h>
int main()
{
    int n, x = 0, y = 0, z = 0;
    scanf("%d", &n);
    int xi, yi, zi;
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &xi, &yi, &zi);
        x = x + xi;
        y = y + yi;
        z = z + zi;
    }

    if (x == 0 && y == 0 && z == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}