// WAP to find the maximum number of group of consecutive elements present in ascending order.
#include <stdio.h>
int main()
{
    int n, count=0;
    printf("Enter the size of an array ");
    scanf("%d", &n);
    int a[n], i;
    printf("Enter the element of an array ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {  
       if(a[i]<a[i+1])
       count++;
    
    }
   
        printf("Maximum no. of group of consecutive elements are %d", count);
}