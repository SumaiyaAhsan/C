#include <stdio.h>
int fibo(int n)
{
    if (n <= 1)
        return n;
    return fibo(n - 1) + fibo(n - 2);
}
void print_fibonacci(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", fibo(i));
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    //    printf("%d",fibo(n));
    print_fibonacci(n);
    return 0;
}

/*int main()
{
    int arr[30];
    int n,i;
    scanf("%d",&n);
    arr[0]=0;
    arr[1]=1;
    for(i=2;i<n;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    for (i =0; i < n; i++)
    {
        printf(" %d",arr[i]);
    }
    return 0;
}*/

/*int fibo(int n)
{
    if (n <= 1)
        return n;
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int x;
    scanf("%d", &x);
    int nfib = fibo(x);
    printf("%d", nfib);
    return 0;
}*/