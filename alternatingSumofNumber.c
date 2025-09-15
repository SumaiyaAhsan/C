#include <stdio.h>
int main()
{
    int n, i, S2, S1, t;
    int arr1[100];

    scanf("%d", &t);
    while (t--)
    {
        S1 = 0, S2 = 0;

        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr1[i]);
        }

        for (i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                S1 = S1 + arr1[i];
            }
            else
            {
                S2 = S2 + arr1[i];
            }
        }
        int sum = S1 - S2;
        printf("%d\n", sum);
    }
    return 0;
}