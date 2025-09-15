//even odd sum
#include <stdio.h>
int main()
{
    int arr[100], n;

    int sumOf_even = 0;
    int sumOf_odd = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sumOf_even = sumOf_even + arr[i];
        }
        else
        {
            sumOf_odd = sumOf_odd + arr[i];
        }
    }
    printf("Sum Of even number=%d\n", sumOf_even);
    printf("Sum Of odd number=%d\n", sumOf_odd);
    return 0;
}
// sum of element of array
int main()
{
    int arr[100],n;
    int sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
       sum=sum+arr[i];
    }
    printf("Sum=%d",sum);
    return 0;
}