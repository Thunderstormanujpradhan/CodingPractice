#include<stdio.h>
int main()
{
    int i_1716,j_1716,n_1716,k_1716=0,sum_1716=0;
    printf("Enter the dimension of a square matrix ");
    scanf("%d",&n_1716);
    int a[n_1716][n_1716];
    printf("Enter the elements of an array ");
    for(i_1716=0;i_1716<n_1716;i_1716++)
    { 
        for(j_1716=0;j_1716<n_1716;j_1716++) //Taking input 
    scanf("%d",&a[i_1716][j_1716]);
    }
     for(i_1716=0;i_1716<n_1716;i_1716++)
    {
         for(j_1716=0;j_1716<n_1716;j_1716++)
      {if(a[i_1716][j_1716]==0)
      k_1716++;                            // calculating total no. of 0
      if(i_1716<j_1716)
     sum_1716=sum_1716+a[i_1716][j_1716]; // sum of upper triangular element
      }
    }
    printf("diagonal elements are ");  // diagonal element
    for(i_1716=0;i_1716<n_1716;i_1716++)
    {
         for(j_1716=0;j_1716<n_1716;j_1716++)
    if(a[i_1716][j_1716]==a[j_1716][i_1716])
      printf("%d ",a[i_1716][j_1716]);
    }
    printf("\nRow major : \n");                  //Row major
    for(i_1716=0;i_1716<n_1716;i_1716++)
    { for(j_1716=0;j_1716<n_1716;j_1716++)
    printf("%d ",a[i_1716][j_1716]);
    printf("\n");
    }
    printf("\nColumn major : \n");              // Column major
    for(j_1716=0;j_1716<n_1716;j_1716++)
    {
        for(i_1716=0;i_1716<n_1716;i_1716++)
    printf("%d ",a[i_1716][j_1716]);
    printf("\n");

    }

 printf("\nTotal no. of zeroes are %d.",k_1716);
 printf("\nSum of upper triangular element %d",sum_1716);

}