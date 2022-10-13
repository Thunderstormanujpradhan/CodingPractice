//Changing all even no. to 1 and odd no. to 0
#include<stdio.h>
int main()
{
    int i,j,a[3][3];
    printf("Enter the matrix element");//For 3*3 matrix
    for(i=0;i<3;i++)
    { for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    }
    printf("\n");
    printf("The matrix is \n");
     for(i=0;i<3;i++)
    { for(j=0;j<3;j++)
    printf("%d  ",a[i][j]);
    printf("\n");}
    printf("The New Matrix is \n");
     for(i=0;i<3;i++)
    { printf("\n");
         for(j=0;j<3;j++)   
     {if (a[i][j]%2==0)
     a[i][j]=1;
     else
    a[i][j]=0;
    
    printf("%d  ",a[i][j]);
   
    }
    }
}