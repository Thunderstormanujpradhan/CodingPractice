// Write a function to delete the whole Linked List.
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;

void wholedelete(node **h, int n)
{
   node *ptr, *ptr1;
   ptr = *h;
   for(int i = 0; i<n; i++)
   {
      ptr1 = ptr->next;
      free(ptr);
      ptr = ptr1;
      *h = ptr1;
   }
}

void printData(node *h) //To check all data are deleted or not.
{
  while(h != NULL)
  {
    printf("%d ",h->data);
    h = h->next;
  }
}

int main()
{
    int number;
    printf("Enter the number of nodes : ");
    scanf("%d",&number);
    node *head, *curr, *ptr;
    head = NULL;
    printf("Enter %d nodes value\n",number);
    for(int i = 0; i<number; i++)
    {
        curr = malloc(sizeof(node));
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
    wholedelete(&head, number);
    printData(head);

}