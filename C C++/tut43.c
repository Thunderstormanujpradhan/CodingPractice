//Calling a function.
#include<stdio.h>


    void sum(int a, int b)
   { int sum=0;
 // printf("Enter two no.");
   // scanf("%d %d",&a,&b);
    sum=a+b;
    printf("%d",sum);
}
void sum(int a,int b);
void main()
{

sum(2,4);


}