//Max, min of an array.
#include<stdio.h>
int main()
{
   int x[10],i_1716,n_1716,large_1716,small_1716;
   
printf("Enter 10 no.");
for(i_1716=0;i_1716<10;i_1716++)
{
    scanf("%d",&n_1716);
    x[i_1716]=n_1716;
}

large_1716=-99999;
small_1716=99999;
for(i_1716=0;i_1716<10;i_1716++)
{
    if(large_1716<x[i_1716])
  large_1716=x[i_1716];
  if(small_1716>x[i_1716])
  small_1716=x[i_1716];
  

}
printf("%d \n",large_1716);
printf("%d \n",small_1716);

}