#include<stdio.h>
int main()
{
    int x, *y, z ;
    x= 50; //actual value
    y= &x;//Address of x
    z= *y; // value of y at the of x 
 printf("Value of x y and z are %d, %p and %d ",x,y,z);
 return 0;
}