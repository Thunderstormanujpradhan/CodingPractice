#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;

} node;
void insertAtBeginning(node **head, int value)
{
    node *ptr = malloc(sizeof(node));
    if (ptr == NULL)
    {
        return;
    }
    ptr->next = NULL;
    ptr->data = value;
    ptr->next = *head;
    *head = ptr;
}
void insertAtEnd(node **head, int value)
{
    node* prev = *head;
    node *ptr = malloc(sizeof(node *));
    ptr->next = NULL;
    ptr->data = value;
    if(*head == NULL)
    {
        *head = ptr;
    }
    while (prev->next!= NULL)
    {
        prev = prev->next;
    }
    prev->next = ptr;
    
}
void insertAtMid(node **head, int value, int pos)
{
    node* prev = *head;
    node* ptr = malloc(sizeof(node));
    ptr->data = value;
    ptr->next = NULL;
    if(*head==NULL)
    {
        *head = ptr;
    }
    else{
        for(int i = 1; i<pos; i++)
        prev = prev->next;
        ptr->next = prev->next;
        prev->next = ptr;
    }
    

}
void printdata(node *head)
{
    while (head != NULL)
    {
        printf("%d\n", head->data);
        head = head->next;
    }
}
int main()
{
    int n;
    printf("Enter the number of nodes : ");
    scanf("%d", &n);
    node *head = NULL;
    node *ptr;
    for (int i = 0; i < n; i++)
    {
        node *curr = malloc(sizeof(node));
        curr->next = NULL;
        curr->data = rand() % 100 + 1;
        if (head == NULL)
        {
            head = curr;
            ptr = curr;
        }
        else
        {
            ptr->next = curr;
            ptr = curr;
        }
    }
    insertAtBeginning(&head, -1);
    insertAtEnd(&head, 2);
    insertAtMid(&head,0,1);
    printdata(head);
}