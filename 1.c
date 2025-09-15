#include<stdio.h>
int main()
{
    int n1,n2,n3;
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2)
    {
         if(n1>n3)
         {
           printf("Large number:%d",n1);
         }
    }
    if(n2>n1)
    {
        if(n2>n3)
        {
            printf("Large number:%d",n2);
        }
    }
    if(n3>n1)
    {
        if(n3>n2)
        {
            printf("Large number:%d",n3);
        }
    }
    else{
        printf("Equal");
    }

    return 0;
}
