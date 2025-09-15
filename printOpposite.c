//take a list of number and print them in reverse order(tecnic 2)
#include <stdio.h>
int main()
{
    int arr[100];
    int n;
    printf("n=");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = (n - 1); i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
    return 0;
}
