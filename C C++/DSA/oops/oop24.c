// find largest no. using recurssion
#include <stdio.h>
int max(int* arr, int n, int i)
{
    if(i+1==n)
    return arr[i];
    else
    {
        int value = max(arr,n,i+1);
        int maximum = arr[i]>value?arr[i]:value;
        return maximum;

    }
}



int main()
{
   

    int n;
    printf("Enter the size of an array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of an array : ");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int v;
    //for(i=0;i<n;i++)
    v = max(arr,n,0);
    printf("%d", v);
}
