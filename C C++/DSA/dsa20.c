// WAP to kind k th smallest &amp; k th largest element in the array.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array ");
    scanf("%d",&n);
    printf("Enter the elements of an array ");
    int arr[n],i,j,temp,k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           if(arr[i]>arr[j])
           {temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
           }
        }
    }
    printf("Enter the kth largest and smallest no. ");
    scanf("%d",&k);
    i=k-1;
    
    printf("kth smallest no. = %d\n",arr[i]);
    printf("kth largest no. = %d\n ",arr[n-i-1]);
}