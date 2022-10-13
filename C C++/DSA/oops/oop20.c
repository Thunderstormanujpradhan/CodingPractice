//Count the total number of duplicate elements in an array.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array : ");
    scanf("%d",&n);
    int arr[n],i,j,count=0;
    printf("Enter the elements of an array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
               count++;
               break;
            }
        }
      
    }
     printf("%d ",count);
}