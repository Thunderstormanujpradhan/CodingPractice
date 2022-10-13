//Printing square of a no.
#include<stdio.h>
int main()
{
    int i;
    float x[3], sqr=0.0,n;
    printf("Enter 3 no.");
   for(i=0;i<3;i++)
  { scanf("%f",&n);
   x[i]=n;}
   for(i=0;i<3;i++)
   {sqr=x[i]*x[i];
    printf("x[%d]=%f \n",i,sqr);
   }
return 0;

}