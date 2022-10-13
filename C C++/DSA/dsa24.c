// Remove repeated element
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
void Remove(node *head, int size)
{
    node *prev = head;
    if (head == NULL)
    {
        printf("Your list has not been created ");
        return;
    }
    while (prev->next != NULL)
    {
        if (prev->data == prev->next->data)
        {
            prev->next = prev->next->next;
           
        }
        else
        {
            prev = prev->next;
        }
    }
}
void PrintData(node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}
// void PrintData(node *head);
int main()
{
    int size, value;
    printf("Enter the size of a list : ");
    scanf("%d", &size);
    node *head = NULL;
    node *ptr;
    
    printf("Enter the elements of a sorted list : ");
    for (int i = 0; i < size; i++)
    {
        node* curr = malloc(sizeof(node));
        curr->next = NULL;
        scanf("%d", &curr->data);
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
    Remove(head, size);
    PrintData(head);
}