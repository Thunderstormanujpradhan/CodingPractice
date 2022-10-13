//traiangular matrix
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the dimension of a matrix ");
    scanf("%d",&n);
    printf("Enter the elements of an array ");
    int a[n][n];
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
             scanf("%d",&a[i][j]);
        }
    }       
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i+j)<(n-1))
            printf("%d  ",a[i][j]);
            else
            printf("0  ");
        }
        printf("\n");
    }
}