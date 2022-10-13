//triangular matrix
#include<stdio.h>
int main()
{   int n,i,j;
    printf("Enter the row size of a square array ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter the elements ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Required triangular matrix is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        { if(j<i)
        printf("%d ",a[i][j]);
        else
        printf("0 ");
        }
        printf("\n");
    }
}