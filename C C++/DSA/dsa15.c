// WAP to arrange first half of the array in ascending order and second half of the
// array in descending order. Use dynamic memory allocation and function call.
#include<stdio.h>
#include<stdlib.h>
void f1(int *arr,int n)
{
    int j,k,temp;
    for(j=0;j<n/2;j++)
    {
        for(k=j+1;k<n/2;k++)
        if(arr[j]>arr[k])
        {temp=arr[j];
        arr[j]=arr[k];
        arr[k]=temp;
        }
    }
       
    for(j=n-1;j>=n/2;j--)
    {
        for(k=j-1;k>=n/2;k--)
        {
            if(arr[j]>arr[k])
            {temp=arr[j];
             arr[j]=arr[k];
             arr[k]=temp;
        }

        }
    }  
   
    for(j=0;j<n;j++)
    printf("%d ",arr[j]);
        

}

int main()
{
    int *arr,n,i;
    printf("Enter the size of an array ");
    scanf("%d",&n);
    arr=(int*)calloc(n,sizeof(int));
    printf("Enter the elements of an array ");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    f1(arr,n);
    
}