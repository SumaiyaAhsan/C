#include <stdio.h>
int main()
{
    int n, m;
    int count = 0;
    scanf("%d%d", &n, &m);
    for (int i = 2; i < m; i++)
    {
        if (m % i == 0)
            count++;
    }
    if (count == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}