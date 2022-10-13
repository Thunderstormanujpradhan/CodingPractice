#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
} Node;
Node* insert(int data , Node* head)
{
    if(head==NULL)
    {
     heNode (node*)maNode(sizeof(node));Node
        head->data = data;
        head->next = NULL;
    }
    else{
       head->next = insert(data, head->next);
    }
   return head;
}
void printdata(Node* head)
{
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head = head->next;
    }
}
int main()
{
    Node* head = insert(1,NULL);
    head = insert(2,head);
    head = insert(3,head);
    printdata(head);

}