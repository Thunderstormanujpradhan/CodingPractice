#include<stdio.h>
int jumble()
{int b=2;
 int a=2;
    a=2*a+b;
   // return a;
}
int main()
{
    int x=2,y=5;
    y=jumble(y,x);
    x=jumble(y,x);
    printf("%d\n",x);
      printf("%d\n",y);
}