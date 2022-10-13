//  Adding new node at the beggining.
#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
int main()
{
    //Dynamic memory allocation
  struct Node* head = (struct Node*)malloc(sizeof(struct Node));
  struct Node* second = (struct Node*)malloc(sizeof(struct Node));
  struct Node* third = (struct Node*)malloc(sizeof(struct Node));
  head->next=NULL;
  second->next=NULL;
  third->next=NULL;
  head->data=3;
  second->data = 45;
  head->next=second;
  third->data = 34;
  second->next = third;
//   while(head!=NULL)
//   {
//     printf("%d ",head->data);
//     head=head->next;
//   }
//Adding new node at the beginning
struct Node* first = (struct Node*)malloc(sizeof(struct Node));//Created the new node dymamically to insert it at beginning
first->data = 1;
first->next = NULL;
first->next = head;
head=first;
  while(head!=NULL)
  {
    printf("%d ",head->data);
    head=head->next;
  }

}