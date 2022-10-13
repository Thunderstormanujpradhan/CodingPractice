//Stack using linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int value;
    struct node *next;
}node;

typedef struct{
    struct node *top;
}STACK;

int push(STACK *s1, int val)
{
    node *curr;
    curr = malloc(sizeof(node));
    if(curr == NULL)
    {
        printf("Over Flow");
        return 1;
    }

    curr->value = val;
    // curr->next = NULL; 
    curr->next = s1->top;
    s1->top = curr;
    return 0;   
   
}

int pop(STACK *s, node **p)
{
    if(s->top == NULL)
    {
        printf("Underflow");
        return 1;
    }
    node *ptr1;
    ptr1 = s->top;
   s->top = s->top->next;
  *p = ptr1; // ptr1 automatically gets deleted as it is local to the function
   return 0;
}

int main()
{
    STACK s1, s;
    node *ptr;
    int k = push(&s1, 10);
    int j = pop(&s, &ptr);

    if(j == 0)
    {
        printf("%d ",ptr->value); 
    }
}