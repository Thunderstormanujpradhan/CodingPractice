//Sorting
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array ");
    scanf("%d",&n);
    int a[n],i,temp,j;
    printf("Enter the elements of  an array ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(j=0;j<n-1;j++)
    { int flag=0;
        for(i=0;i<n-1-j;i++)
    {
        if(a[i]>a[i+1])
      {  temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        flag=1;
      }
      
       
    }
    if(flag==0)
    break;
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}