// In a one dimensional array, user gives a certain range of index with rotation
// value. You need to right rotate those range of values based on the given shifting
// value.
// Given array: 2,9,6,3,5,8,11,3,6,7,13,5
// Given range: 4th index to 9th index(consider the starting index is 0) and shifting
// value is 2
// Output: 2,9,6,3,6,7,5,8,11,3,13,5
#include<stdio.h>
int main()
{
    int n,i,j,k,l,m,temp;
    printf("Enter the size of an array ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of an array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the starting and ending index ");
    scanf("%d%d",&k,&l);
    printf("Enter the shifting value ");
    scanf("%d",&m);
    for(j=0;j<m;j++)
    {temp=a[l];
    for(i=l;i>k;i--)
    {
       a[i]=a[i-1];
      
    }
    a[k]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}