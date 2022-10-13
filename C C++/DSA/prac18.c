#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

int insert(Node **head_ref, int pos, int value)
{
    Node *ptr = malloc(sizeof(Node));

    if (ptr == NULL) return 1;

    ptr->next = NULL;
    ptr->data = value;

    // Insert only at the beginning
    // if (*head_ref == NULL) {
    //     *head_ref = ptr;   
    // } else {
    //     ptr->next = *head_ref;
    //     *head_ref = ptr;
    // }

    // insert at given position
    Node *prev = NULL;
    Node *curr = *head_ref;

    for (int i = 0; i < pos && curr != NULL; i++)
    {
        prev = curr;
        curr = curr->next;
    }

    if (prev == NULL) {
        ptr->next = *head_ref;
        *head_ref = ptr;
    } else if (curr==NULL)
    {
        prev->next = ptr;
    } else
    {
        prev->next = ptr;
        ptr->next = curr;
    }

    return 0;
}

void display(Node* head) {
    Node *ptr = head;

    while (ptr)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main()
{
    Node *head = NULL;

    for (int i = 0; i < 100; i++)
        insert(&head, i, i + 1);
    
    display(head);

    return 0;
}