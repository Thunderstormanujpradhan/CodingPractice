#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;
void insertNode(node **head, int pos, int value, int size)
{
    node* prev = *head;
    node* ptr = malloc(sizeof(node));
    ptr->next = NULL;
    ptr->data = value;
    if(pos<0 || pos>size)
    {
        printf("Wrong index choosen ");
        return;
    }
    if(pos==0)
    {
        ptr->next = *head;
        *head = ptr;
        return;
    }
    for(int i = 1; i<pos; i++)
    {
       prev  = prev->next;
    }
    ptr->next = prev->next;
    prev->next = ptr;

}
void displayNode(node *head)
{
    node* ptr = head;
    while(ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    } 
}


int main()
{   
    int n;
    node* head = NULL;
    printf("Enter the size of the linked list : ");
    scanf("%d",&n);
    node* tail;
    for(int i=0; i<n; i++)
    {
        node* curr = (node*)malloc(sizeof(node));
        curr->next = NULL;
        curr->data = rand()%100+10;
        if(head == NULL)
        {
            head = curr; 
            tail = curr;
        }
        else{
            tail->next = curr;
            tail = curr;
        }
    }
    displayNode(head); printf("\n");
    insertNode(&head, 0, 0, n);
    displayNode(head);

}