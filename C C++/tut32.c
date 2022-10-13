//Swapping pairs of element in an array
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the no. of element to be inserted ");
    scanf("%d",&n);
    int a[n],b[n];
   printf("Enter thr elements of an array ");
   for(i=0;i<n;i++) 
   scanf("%d",&a[i]);
   if(n%2==0)
   for(i=0;i<n;i=i+2)
   {
    b[i]=a[i];
    a[i]=a[i+1];
    a[i+1]=b[i];
    printf("%d %d ",a[i],a[i+1]);
   }
   else
  { for(i=0;i<n-1;i=i+2)
   {
    b[i]=a[i];
    a[i]=a[i+1];
    a[i+1]=b[i];
    printf("%d %d ",a[i],a[i+1]);
   }
   printf("%d",a[n-1]);
  }
}