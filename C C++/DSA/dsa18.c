//WAP that will sum the surrounding elements of a given index in the matrix.
#include<stdio.h>
int main()
{
    int n,m,k,sum=0;
    printf("Enter the dimension of a matrix ");
    scanf("%d",&n);
    printf("Enter the elements of a matrix ");
    int i,a[n][n],j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the position of matrix ");
    scanf("%d %d",&m,&k);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i+1==m && j+1==k)||(i+1==m && j==k)||(i+1==m && j==k+1)||(i==m && j+1==k)||(i==m&&j==k+1)||(i==m+1 && j+1==k)||(i==m+1 && j==k)||(i==m+1 && j==k+1))
            sum=sum+a[i][j];

        }
    }
        printf("%d",sum);
    return 0;
}