//Insertion in array
// 30 20 40 60 90 80
//Insert 50 at 3rd position
//30 20 50 40 60 90 80
#include<stdio.h>
int main()
{
    int arr[20], position, value,i,n;
    printf("Enter the no. of elements : ");
    scanf("%d",&n);

    printf("Enter the elements of an array : ");
    for(i = 0; i < n; i++)
    {
      scanf("%d",&arr[i]);
    }

    printf("Enter the position and value to be inserted in array : ");
    scanf("%d%d",&position, &value);
     
    for(i = n-1; i>=position-1; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[position-1] = value;

    printf("Final array is : ");
    for(i = 0; i<n+1; i++)
    printf("%d ",arr[i]);
    
    return 0;
}