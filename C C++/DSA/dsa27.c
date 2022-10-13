// Write a non-recursive function to display the single linked list in the reverse order.
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
  int data;
  struct node *next;
}node;

void printData(node *head)
{
    node *ptr = head;
    while(ptr !=NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}

void reverse(node **head, int number)
{
    node *ptr, *curr;
    for(int i = 0; i<number; i++)
    {
        for(ptr = *head; ptr !=NULL; ptr = ptr->next);
        curr =*head;
        *head = ptr;
        free(ptr); 
        (*head)->next = curr;
    }
}

int main()
{
    int number;
    printf("Enter the number of nodes to be created : ");
    scanf("%d",&number);
    node *head, *ptr, *curr;
    head = NULL;
    printf("Enter the node data : ");
    for(int i = 0; i<number; i++)
    {
        curr = malloc(sizeof(node));
        curr->next = NULL;
        scanf("%d",&curr->data);
        if(head ==NULL)
        {
            head = curr;
            ptr = curr;
        }
        else{
            ptr->next = curr;
            ptr = curr;
        }
    }
    printf("Nodes before reversing it : \n");
    printData(head);
    reverse(&head, number);
    printf("\nNodes after reversing it : \n");
    printData(head);
}