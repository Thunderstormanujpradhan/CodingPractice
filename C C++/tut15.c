#include<stdio.h>
int main()
{
    int i,j,k=0,l;
    printf("Enter the no.");
    scanf("%d",&j);
    l=j;
    //To Check the perfect no.
    for(i=1;i<j;i++)
    {
        if(j%i==0)
        k=k+i;
     }
 if(l==k)
 printf("Perfect no.");
 else
  printf("Not a perfect no.");
 
}