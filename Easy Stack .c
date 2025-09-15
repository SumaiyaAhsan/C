#include <stdio.h>
void push(int stack[], int *top)
{
    int x;
    scanf("%d", &x);
    (*top)++;
    stack[*top] = x;
}
void pop(int stack[], int *top)
{
    if (*top != -1)
    {

        (*top)--;
    }
}
void display(int stack[], int top)
{

    if (top == -1)
    {
        printf("Empty!\n");
    }
    else
    {
        printf("%d\n", stack[top]);
    }
}
int main()
{
    int stack[1000000];
    int top = -1;
    int T;
    scanf("%d", &T);

    for (int j = 0; j < T; j++)
    {
        int query;
        scanf("%d", &query);
        if (query == 1)
        {
            push(stack, &top);
        }
        else if (query == 2)
        {
            pop(stack, &top);
        }
        else if (query == 3)
        {
            display(stack, top);
        }
    }
    return 0;
}