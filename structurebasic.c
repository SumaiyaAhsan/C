#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    char name[20];
};
int main()
{
    struct student a;
    a.id = 26;
    strcpy(a.name, "tamanna");

    printf("%d\n", a.id);
    printf("%s\\n", a.name);
    return 0;
}