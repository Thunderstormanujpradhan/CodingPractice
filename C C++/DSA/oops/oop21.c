// Write a menu driven program for the following matrix operations:-
// a. Multiplication of two matrix
// b. Sum of the upper triangular matrix
// c. The sum of each row and column of a matrix.
// d. Check the sparse matrix
// e. Interchange diagonals of a matrix.
#include<stdio.h>
int main()
{
   int i,j,n,m;
   printf("Enter the size of matrix : ");
   scanf("%d",&m);
   int arr1[m][m], arr2[m][m];
   printf("Enter the elements of an 1st matrix : ");
   for(i=0;i<m;i++)
   {
    for(j=0;j<m;j++)
    {
        scanf("%d",arr1[i][j]);
    }
   }
   printf("Enter the elements of an 2nd matrix : ");
   for(i=0;i<m;i++)
   {
    for(j=0;j<m;j++)
    {
        scanf("%d",arr2[i][j]);
    }
   }
   
   printf("1. Multiplication of two matrix\n2. The sum of each row and column of a matrix.\n3. The sum of each row and column of a matrix.\n4. Check the sparse matrix\n5. Interchange diagonals of a matrix.  ");
   printf("\nEnter your choice : ");
   scanf("%d",&n);
   switch(n)
   {
    case 1 : 
   }
  
}