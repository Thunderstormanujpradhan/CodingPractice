//Reverse the linked list using recursion
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

node *head;


 
void reverse(node *h)
{
   if(h->next == NULL)
   {
    head = h;
    return;
   }
   
    reverse(h->next);
    node *q = h->next;
    q->next = h;
    p->next = NULL;
   
}

void printData(node *head)
{
    node *ptr = head;
    while(ptr != NULL)
    {
        printf("%d->",ptr->data);
        ptr = ptr->next;
    }
}


int main()
{
    reverse(&head);
    printData(head);
}