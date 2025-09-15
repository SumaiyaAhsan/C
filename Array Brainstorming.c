#include <stdio.h>
int main()
{

    int i, j, t, T;
    int min;

    scanf("%d", &T);
    for (int t = 1; t <= T; t++)
    {
        int q;
        int n;
        scanf("%d%d", &n, &q);
        int arr[n + 1];

        for (int p = 1; p <= n; p++)
        {
            scanf("%d", &arr[p]);
        }
        printf("case %d:\n", t);

        while (q--)
        {
            scanf("%d%d", &i, &j);
            int min = arr[i];
            for (int k = i; k <= j; k++)
            {
                if (arr[k] < min)
                {
                    min = arr[k];
                }
            }
            printf("%d\n", min);
        }
    }

    return 0;
}