//Sparse Matrix
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int r;
    int v;
    int c;
    struct node *next;
}node;

void create(node **head)
{
    printf("Enter the total no of row, column and non zero value : ");
    *head = malloc(sizeof(node));
    scanf("%d %d %d",&(*head)->r, &(*head)->c, &(*head)->v);
    (*head)->next = NULL;
    node *ptr =*head;
    node *curr;
    printf("Enter the value of row, column and value of non zero element : ");
   for(int i = 0; i<(*head)->v; i++)
   {
     curr = malloc(sizeof(node));
     scanf("%d %d %d",&curr->r, &curr->c, &curr->v);
     curr->next = NULL;
     ptr->next = curr;
     ptr = curr;
   }
}

void printData(node *head)
{
    node *ptr = head;
    while(ptr != NULL)
    {
        printf("%d %d %d -> ",ptr->r, ptr->c, ptr->v);
        ptr = ptr->next;
    }
}


int main()
{
   
    node *head;
    create(&head);
    printf("Sparse matrix non zero element : ");
    printData(head);
}