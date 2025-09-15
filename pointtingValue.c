#include <stdio.h>
int main()
{
    int *ptr;
    int x = 10, y = 20, z = 30;
    ptr = &x;
    printf("x=%d\n", *ptr);
    ptr = &y;
    printf("y=%d\n", *ptr);
    ptr = &z;
    printf("z=%d\n", *ptr);
    return 0;
}

/*{
    int x = 5, y = 6, z = 7;
    int *ptr;
    ptr = &x;
    printf("%d\n", x);
    printf("%u\n", &x);
    printf("%d\n", *ptr);
    printf("%u\n", &ptr);
    printf("%u\n", ptr);
    return 0;
}*/