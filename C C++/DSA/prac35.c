//Stack (Push Operation)
#include<stdio.h>
#include<stdlib.h>

#define MAX 6

typedef struct{
    int top;
    int data[MAX];
}STACK;

int push(STACK *s, int val)
{
    if(s->top == MAX -  1)
    {
        printf("Overflow ");
        return 1;
    }

    s->top++;
    s->data[s->top] = val;


    return 0;
}

int main()
{
    int k, l;
    STACK s1;
    s1.top = -1;
    k = push(&s1, 6); //(which stack and what value)
    // If value of push is zero, then value is properly inserted
    //If value of push is 1, then value is not properly inserted.
    l = pop(&s1,)
}