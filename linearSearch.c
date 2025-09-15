#include <stdio.h>
int main()
{
    int long arr[] = {1, 2, 3, 4, 5, 6};
    int Size = sizeof(arr) / sizeof(arr[0]);
    // printf("%ld\n", sizeof(arr) / sizeof(arr[0]));
    int val = 5;
    int pos = -1;
    for (int i = 0; i < Size; i++)
    {
        if (val == arr[i])
        {
            pos = i + 1;
            break;
        }
    }
    if (pos == -1)
    {
        printf("not found");
    }
    else
    {
        printf("the position is :%d\n", pos);
    }
    return 0;
}