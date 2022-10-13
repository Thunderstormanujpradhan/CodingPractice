//Insertion of node at beginning.
#include<stdio.h>
#include<stdlib.h>
struct Node{
     int data;
     struct Node* next;
};
int main()
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    head->data=45;
    head->next=NULL;
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    second->data=98;
    second->next=NULL;
    head->next=second;
    // while(head!=NULL)
    // {
    //     printf("%d ",head->data);
    //     head=head->next;
    // }
    //Inseting new node
    printf("\n");
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = 3;
    newnode->next = NULL;
    newnode->next = head;
    head = newnode;
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    

}