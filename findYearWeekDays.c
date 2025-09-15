#include <stdio.h>
int main()
{
    int D = 1329;
    int y = D / 365;
    printf("Years=%d\n", y);
    int w = (D % 365) / 7;
    printf("Weeks=%d\n", w);
    int d = ((D % 365) % 7);
    printf("Days=%d\n", d);
    return 0;
}