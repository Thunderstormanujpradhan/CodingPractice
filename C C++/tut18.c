//Printing rectangle

#include<stdio.h>
int main()
{
    int i,j,k,l;
    printf("Enter the no. of rows and column");
    scanf("%d %d",&i,&j);
    for(k=0;k<i;k++)
    {for(l=0;l<j;l++)
    printf("*");
    printf("\n");
    }
}