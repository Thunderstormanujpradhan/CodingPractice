// WAP to find nth node from the end of a Linked List
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;

void create(node **head, int size)
{
    node *ptr, *curr;
    printf("Enter the elements of the list : ");
    for (int i = 0; i < size; i++)
    {
        curr = malloc(sizeof(node));
        curr->next = NULL;
        scanf("%d", &curr->data);
        if (*head == NULL)
        {
            *head = curr;
            ptr = curr;
        }
        else
        {
            ptr->next = curr;
            ptr = curr;
        }
    }
}

void Find(node *head, int size)
{
    node *ptr;
    ptr = head;
    int n;
    printf("Enter the node number to be finded from last : ");
    scanf("%d", &n);
    if (size < n)
    {
        printf("Given wrong node number");
        return;
    }
    for (int i = 0; i < size - n; i++)
        ptr = ptr->next;
    printf("%d node from the last is : ", n);
    printf("%d", ptr->data);
}

int main()
{
    int size;
    printf("Enter the size of your list : ");
    scanf("%d", &size);
    node *head = NULL;
    create(&head, size);
    Find(head, size);
}
