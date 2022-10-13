//Printing lower triangular matrix
#include<stdio.h>
int main()
{
    int i,j,a[3][3];
    printf("Enter the element of matrix ");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
  for(i=0;i<3;i++)
  {  for(j=0;j<=i;j++)  
 printf("%d ",a[i][j]);
 printf("\n");
  }
}