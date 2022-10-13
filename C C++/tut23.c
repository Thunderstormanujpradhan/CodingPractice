//Print sum of the diagonal of the matrix.
#include<stdio.h>
int main()
{
    int i,j,a[3][3],l=0,r=0;
    printf("Enter the 9 elements of a matrix");
    for(i=0;i<3;i++)
    {for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    }
    printf("\n");
    printf("The matrix is \n");
    for(i=0;i<3;i++)
    {for(j=0;j<3;j++)
    printf("%d  ",a[i][j]);
    printf("\n");
    }
    for(i=0;i<3;i++)
    {for(j=0;j<3;j++)
    {
        if(a[i][j]==a[j][i])
        l=l+a[i][j];
        if(i+j==2)
        r=r+a[i][j];

    }
    }
    printf("Sum of left diagonal element is %d \n",l);
    printf("Sum of right diagonal element is %d \n",r);
    return 0;
}