//Multiplication of Polynomial
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int coeff;
    int exp;
    struct node *next;
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
    scanf("%d%d",&curr->coeff,&curr->exp);
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

void mul(node *h1, node*h2, node **h)
{
    node *curr, *ptr, *ptr1, *ptr2;
    for(ptr1 = h1; ptr1 != NULL; ptr1 = ptr1->next)
    {
        for(ptr2 = h2; ptr2 != NULL; ptr2 = ptr2->next)
        {
            curr = malloc(sizeof(node));
            curr->next = NULL;
            curr->coeff = (ptr1->coeff) * (ptr2->coeff);
            curr->exp = ptr1->exp + ptr2->exp;
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
}

void simplify(node **h)
{
   node *ptr, *prev, *ptr1;
   ptr = *h;
   while(ptr != NULL)
   {
    prev = ptr;
    ptr1 = ptr->next;
    while(ptr1 != NULL)
    {
      if(ptr->exp == ptr1->exp)
      {
        ptr->coeff = ptr->coeff +ptr1->coeff;
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

void printData(node *h)
{
    while(h !=NULL)
    {
        printf("%d %d  ",h->coeff,h->exp);
        h = h->next;
    }
}
int main()
{
    node *h1, *h2, *h;
    h1 = h2 = h = NULL;
    create(&h1);
    create(&h2);
    mul(h1, h2, &h);
    simplify(&h);
    printData(h);
}