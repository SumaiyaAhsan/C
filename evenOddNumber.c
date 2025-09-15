//find the even and odd number from the list of array.
#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size_arr = sizeof(arr) / sizeof(arr[0]);
    int even_count = 0;
    int odd_count = 0;
    printf("Size=%d\n", size_arr);
    for (int i = 0; i < size_arr; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    printf("Total even=%d\n", even_count);
    printf("total odd=%d\n", odd_count);
    return 0;
}
