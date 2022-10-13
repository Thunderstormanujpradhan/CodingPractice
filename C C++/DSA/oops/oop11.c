// WAP in C using ternary operator to find the Greatest Among Three Numbers
#include<stdio.h>
int main()
{
    int a,b,c,large;
    printf("Enter three numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    large=(a>b)?(a>c?a:c):(b>c?b:c);
    printf("largest number among %d, %d and %d is %d",a,b,c,large);


}