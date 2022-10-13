#include<stdio.h>
int main()
{
    int a , b ,c ,large;
    printf("Enter 1st, 2nd and 3rd no.\n");
    scanf("%d %d %d",&a,&b,&c);
   large=(a>b&&a>c)?a:(b>c)?b:c;
   printf("%d",large);
}