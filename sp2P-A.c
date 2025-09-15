

// For each test case, output two integers: the minimum ofx and y.

#include <stdio.h>
int main()
{
    int t, x, y;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d%d", &x, &y);

        if (x < y)
        {
            printf("%d %d\n", x, y);
        }
        else
        {
            printf("%d %d\n", y, x);
        }
    }

    return 0;
}
//    another way

#include <stdio.h>
int main()
{
    int t, x, y;
    scanf("%d", &t);
    int i = 1;
    while (i <= t)
    {
        scanf("%d%d", &x, &y);

        if (x < y)
        {
            printf("%d %d\n", x, y);
        }
        else
        {
            printf("%d %d\n", y, x);
        }
        i++;
    }

    return 0;
}
// another way

#include <stdio.h>
int main()
{
    int t, x, y;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        scanf("%d%d", &x, &y);

        if (x < y)
        {
            printf("%d %d\n", x, y);
        }
        else
        {
            printf("%d %d\n", y, x);
        }
    }

    return 0;
}