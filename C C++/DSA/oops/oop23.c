// Find maximum and minimum elements in an array using recursion.
#include<stdio.h>
int max(int *arr,int i)
{ static int large = -99999999;
   if(arr[i]>large)
   large=arr[i];
   return large;
}
int main()
{
    int n,i;
    printf("Enter the size of an array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of an array : ");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int v;
    for(i=0;i<n;i++)
    v = max(arr,i);
    printf("%d", v);
}