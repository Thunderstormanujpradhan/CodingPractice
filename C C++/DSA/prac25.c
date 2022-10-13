//Reverse the element of the list
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

void reverse(node **head, int size)
{
    node* curr1 = *head;
    node* temp;
   while(curr1 != NULL)
   {
     node* lat = malloc(sizeof(node));
     lat->data = curr1->next->data;
     lat->next = *head;
     lat = curr1->next;
     *head = lat;
     free(curr1->next);
     
   }
   
   
}
void printData(node *head)
{
    while(head!=NULL)
    {
        printf("%d",head->data);
        head = head->next;
    }
}

int main()
{
    node* head = NULL;
    node* ptr;
    int size;
    printf("Enter the size of the list : ");
    scanf("%d",&size);
    printf("Enter the elements of the list : ");
    for(int i = 0; i<size; i++)
    {
        node* curr = malloc(sizeof(node));
        curr->next = NULL;
        scanf("%d",&curr->data);
        if(head == NULL)
        {
            head = curr;
            ptr = curr;
        }
        else{
            ptr->next = curr;
            ptr = curr;
        }
    }
    reverse(&head, size);
    printData(head);
}