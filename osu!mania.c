#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        char row[5];
        int columns[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%s", row);
            for (int j = 0; j < 4; j++)
            {
                if (row[j] == '#')
                {
                    columns[i] = j + 1;
                    break;
                }
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            printf("%d ", columns[i]);
        }
        printf("\n");
    }

    return 0;
}

/*#include <stdio.h>
int main()
{
    char arr1[100][100];

    int n, t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                scanf("%s", &arr1[i][j]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (arr1[i][j] == '#')
                {
                    printf(" %d", j + 1);
                    break;
                }
            }
        }
    }
    return 0;
}*/