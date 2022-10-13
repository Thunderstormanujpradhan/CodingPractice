//Inserting a new node at the end of the linked list.
#include<stdio.h>
#include<stdlib.h>
struct Node{
      int data;
      struct Node* next;
}; 
int main()
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    head->data = 3;
    head->next = NULL;
    second->data = 4;
    second->next = NULL;
    third->data = 5;
    third->next = NULL;
    head->next = second;
    second->next = third;
    // while(head!=NULL)
    // {
    //     printf("%d ",head->data);
    //     head=head->next;
    // }
    struct Node* last = (struct Node*)malloc(sizeof(struct Node));
    last->data=69;
    last->next = NULL;
    third->next = last;
      while(head!=NULL)
    {
         printf("%d ",head->data);
         head=head->next;
     }
    

}