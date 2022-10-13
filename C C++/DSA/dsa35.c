// Join two double circular linked list in the following manner. List 1: 12,13,14,15,16
// List 2: 40,50,60,71,72
// Resultant list: 12,40,13,50,14,60,15,71,16,72
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
    struct node *prev;
}node;

void create(node **head, int size)
{
    *head = NULL;
    printf("Enter the elements of the list : ");
    node *curr, *ptr;
    for(int i = 0; i<size; i++)
    {
        curr = malloc(sizeof(node));
        curr->next = NULL;
        curr->prev = NULL;
        scanf("%d",&curr->data);
        if(*head == NULL)
        {
            *head = curr;
            ptr = curr;
        }
        else{
            ptr->next = curr;
            curr->prev = ptr;
            ptr = curr;
        }
    }
}

void reverse(node **head, int size, int m, int n)
{

}

void printData(node *head)
{
    node *ptr = head;
    while(ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main()
{
    int size;
    node *head;
    printf("Enter the size of the list : ");
    scanf("%d",&size);
    create(&head, size);
    printf("\n");
    create(&head, size);
   // printData(head);
   
}