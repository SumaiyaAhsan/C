// #include<stdio.h>
// int add(int a,int b)
// {
//     return a+b;
// }
// int main()
// {
//     int a=5,b=10;
//     printf("Sum=%d",add(a,b));
//     return 0;
// }
#include <stdio.h>
void add(int *a, int *b)
{
   printf("Sum=%d\n",*a+*b);
}
int main()
{
    int a = 5, b = 10;
    add(&a, &b);
    return 0;
}

// // Write a program in C to separate individual characters from a string..
// #include <stdio.h>
// int main()
// {
//     char str[100];
//     char str1[100];
//     fgets(str, sizeof(str), stdin);
//     strcpy(str1,str);
//     printf("%s\n",str1);
    

   
// }