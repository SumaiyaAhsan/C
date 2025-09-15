#include <stdio.h>
#include <string.h>

int stack[1000000];
int top = -1;
void push(int id)
{
    top++;
    stack[top] = id;
}
void pop()
{
    if (top >= 0)
    {
        top--;
    }
}
int peek_val()
{
    if (top >= 0)
    {
        return stack[top];
    }
    else
    {
        return -1;
    }
}
void substring(char *s)
{
    int size = strlen(s);
    int max_length = 0;
    int count = 1;

    push(-1);
    for (int i = 0; i < size; i++)
    {
        if (s[i] == '(')
        {
            push(i);
        }
        else
        {
            pop();
            if (top != -1)
            {
                int length = i - peek_val();

                if (length > max_length)
                {
                    max_length = length;
                    count = 1;
                }
                else if (length == max_length)
                {
                    count++;
                }
            }
            else
            {
                push(i);
            }
        }
    }

    if (max_length == 0)
    {
        printf("0 1\n");
    }
    else
    {
        printf("%d %d", max_length, count);
    }
}

int main()
{
    char s[1000000];
    scanf("%s", s);
    substring(s);
    return 0;
}