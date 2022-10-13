#include<stdio.h>
int main()
{
    int n,flag=1;
    scanf("%d",&n);
    int a[n],i,j,sum=0;
   scanf("%d",&a[0]);
   scanf("%d",&a[1]);
   scanf("%d",&a[2]);
   
    while(i=3)
    { 
       sum=sum+a[i-3]+a[i-2]+a[i-1];
       j=sum;
       break;
       }

      for(i=4;i<n;i++)
       {j=j+a[i-2]+a[i-3];
      
      
       }printf("%d",j);

}