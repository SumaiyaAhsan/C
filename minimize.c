#include <stdio.h>
int main()
{
    int a, b, c = 1, t, n;
    scanf("%d", &t);
    if (1 <= t <= 55)
    {
        while (t--)
        {
            scanf("%d%d", &a, &b);
            if (1 <= a <= b <= 10)
            {
                n = (c - a) + (b - c);
                printf("%d", n);
            }
        }
    }
    return 0;
}