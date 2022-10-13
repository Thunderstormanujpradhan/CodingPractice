//Linked list using Recurssion.
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int key;
  struct Node *next;
} Node;

Node *insert(int key, Node *head) {
  if (head == NULL) {
    head = (Node *)malloc(sizeof(Node));
    head->key = key;
    head->next = NULL;
  } else {
    head->next = insert(key, head->next);
  }
  return head;
}

void display(Node *head) {
  if (head != NULL) {
    printf("%d\t", head->key);
    display(head->next);
  } else {
    printf("\n");
  }
}


int main() {
  Node *head = insert(1, NULL);
  head = insert(2, head);
  head = insert(3, head);
  head = insert(4, head);
  display(head);
}