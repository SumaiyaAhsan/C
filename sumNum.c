#include <stdio.h>
int call_by_ref(int *p, int *q)
{
    return *p + *q;
}
int main()
{
    int a = 5, b = 10;
    int sum = call_by_ref(&a, &b);

    printf("%d\n", sum);
    return 0;
}
