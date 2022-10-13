// Write a function to reverse the nodes of a double linked list.
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} node;

void create(node **head, int size)
{
    printf("Enter the elements of the list : ");
    node *curr, *ptr;
    for (int i = 0; i < size; i++)
    {
        curr = malloc(sizeof(node));
        curr->next = NULL;
        curr->prev = NULL;
        scanf("%d",&curr->data);
        if (*head == NULL)
        {
            *head = curr;
            ptr = curr;
        }
        else
        {
            ptr->next = curr;
            curr->prev = ptr;
            ptr = curr;
        }
    }
}

void reverse(node **head, int size)
{
    node *ptr = *head;
    node *temp;
    for (int i = 0; i < size - 1; i++)
    {
        ptr = ptr->next;
    }
    *head = ptr;
    for (int i = 0; i < size; i++)
    {
        temp = ptr->next;
        ptr->next = ptr->prev;
        ptr->prev = temp;
        ptr = ptr->next;
    }
}

void printData(node *head)
{
    node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main()
{
    int size;
    printf("Enter the size of list : ");
    scanf("%d", &size);
    node *head = NULL;
    create(&head, size);
    printf("List before reversing the list : ");
    printData(head);
    reverse(&head, size);
    printf("List after reversing the list : ");
    printData(head);
}