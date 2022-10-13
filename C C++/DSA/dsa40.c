#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

void create(node **head, int size)
{
   node *curr, *ptr;
   printf("Enter the elemnts of the list : ");
   for(int i = 0; i<size; i++)
   {
      curr = malloc(sizeof(node));
      curr->next = NULL;
      scanf("%d",&curr->data);

      if(*head == NULL)
      {
        *head = curr;
        ptr = curr;
      }
      else
      {
        ptr->next = curr;
        ptr = curr;
      }
   }

}

void printData(node *head)
{
    node *ptr = head;
    while(ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}

void arrange(node **head, int size)
{
    node *ptr = *head;
    node *store = *head;
    node *next;
    node *tail;
    for(tail = *head; tail != NULL; tail = tail->next);
    
    for(int i = 0; i<size; i++)
    {   next = ptr->next;
        if(ptr->data % 2 == 0)
        {
            tail->next = ptr;
            tail = tail->next;
            tail->next = NULL;
            
        
        }
        ptr = next;
        
    }
}

int main()
{
    node *head;
    int size;
    printf("Enter the size of the list : ");
    scanf("%d",&size);
    create(&head, size);
    printf("List before changes : ");
    printData(head);
    arrange(&head, size);
    printf("\nList after arrangement : ");
    printData(head);
}