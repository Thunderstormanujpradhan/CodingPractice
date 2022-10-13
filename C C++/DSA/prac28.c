//Adding  polynomial
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int coeff;
    int exp;
    struct node* next;
}node;

void create(node **h)
{
    node *curr, *ptr;
    int nT;
    printf("Enter the number of terms : ");
    scanf("%d",&nT);
    printf("Enter the coefficient and exponent of the polynomial : ");
    for(int i = 0; i<nT; i++)
    {
        curr = malloc(sizeof(node));
        curr->next = NULL;
        scanf("%d%d",&curr->coeff, &curr->exp);
        if(*h == NULL)
        {
            *h = curr;
            ptr = curr;
        }
        else{
            ptr->next = curr;
            ptr = curr;
        }

    }
}

void join(node **h1, node *h2)
{
    if(*h1 == NULL)
    {
        *h1 = h2;
    }
    else{
        node *ptr;
        for(ptr = *h1; ptr->next !=NULL; ptr = ptr->next);
        ptr->next = h2;
    }
}

void simplify(node **h1)
{
    node *ptr, *prev, *ptr1;
    ptr = *h1;
    while(ptr != NULL)
    {
        prev = ptr;
        ptr1 = ptr->next;
        while(ptr1 != NULL)
        {
          if(ptr1->exp == ptr->exp)
          {
            ptr->coeff = ptr->coeff + ptr1->coeff;
            prev->next = ptr1->next;
            free(ptr1);
            ptr1 = prev;

          }
            prev = ptr1;
            ptr1 = ptr1->next;
        }
    ptr = ptr->next;
    }
}

void printData(node *h1)
{
    while(h1 != NULL)
    {
        printf("%d %d ",h1->coeff, h1->exp);
        h1 = h1->next;
    }
}


int main()
{
    node *h1, *h2;
    h1 = h2 = NULL;
    create(&h1);
    create(&h2);
    join(&h1, h2);
    simplify(&h1);
    printData(h1);
}