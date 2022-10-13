#include<stdio.h>
void result(int a[],int n)
{  int i;
      for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
         printf("%d ",a[i]);

    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        printf("%d ",a[i]);
    } 
}
void result(int a[],int n);
int main()
   { int n;
    printf("Enter the size of an array ");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter the elements of an array ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    result(a,n);
}