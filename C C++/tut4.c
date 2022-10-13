#include<stdio.h>
int main()
{
    int i=1 ,n;
    float  sum=0;
    printf("Enter no. of terms \n");
    scanf("%d", &n);
    while(i<=n)
    {
        sum= sum+ (1.0/i);
         printf("Sum of %d terms is %f  ", i, sum );
         i++;
    }
   
    return 0;
}