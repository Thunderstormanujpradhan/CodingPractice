//Max, min and avg of an array.
#include<stdio.h>
int main()
{
   int x[10],i,n,large,small;
   float sum=0.0;
printf("Enter 10 no.");
for(i=0;i<10;i++)
{
    scanf("%d",&n);
    x[i]=n;
}

large=-99999;
small=99999;
for(i=0;i<10;i++)
{
    if(large<x[i])
  large=x[i];
  if(small>x[i])
  small=x[i];
  sum=sum+x[i];

}
printf("%d \n",large);
printf("%d \n",small);
printf("%f",sum/10);
}