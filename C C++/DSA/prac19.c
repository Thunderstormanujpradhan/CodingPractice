#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;


void display(node* head)
    {
        node* ptr2 = head;
        while(ptr2!= NULL)
        {
            printf("%d ",ptr2->data);
            ptr2=ptr2->next;
        }
    }

int main()
{   int n;
    node* curr;
    node* ptr = NULL;
    node* head = NULL;
    printf("Enter the size of list : ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        curr = malloc(sizeof(node));
        curr->next = NULL;
        curr->data = rand()%100+10;
        if(head==NULL)
        {
            head = curr;
            ptr = curr;
        } else
        {
            ptr->next = curr;
            ptr = curr;
        }
    }
    display(head);
   
}