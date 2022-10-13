// Given a singly linked list, determine if its a palindrome. Return 1 or 0 denoting if its a palindrome or not, respectively. (without using recession)
// List 1-->2-->1 is a palindrome. List 1-->2-->3 is not a palindrome.
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

void delete(node **head)
{
    node *ptr = *head;
    while (ptr != NULL) {
        node *next = ptr->next;
        free(ptr);
        ptr = next;
    }
    *head = NULL;
}

int isPalindrome(node *head, int size)
{
    node *newhead = NULL;

    node *ptr = head;

    while (ptr != NULL)
    {
        node *h = malloc(sizeof(node));
        h->data = ptr->data;
        h->next = newhead;
        newhead = h;
        ptr = ptr->next;
    }

    ptr = newhead;

    while (head != NULL && ptr != NULL)
    {
        if (head->data != ptr->data)
        {
            delete(&newhead);
            return 0;
        }
        head = head->next;
        ptr = ptr->next;
    }
    delete(&newhead);
    // if(head == NULL && newhead == NULL)
    return 1;
}

int main()
{
    node *head;
    int size;
    printf("Enter the the size of the list : ");
    scanf("%d", &size);
    create(&head, size);
    printf("%s\n", isPalindrome(head, size) == 1 ? "palindrome" : "not palindrome");
}