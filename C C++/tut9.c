#include<stdio.h>
int main()
    { int a,b,c;
     printf("Enter 1st and 2nd integer \n");
     scanf("%d %d",&a,&b);
     printf("SELECT ONE OPERATION FROM THE LIST \n");
     printf("1st Addition \n");
     printf("2nd Subtraction \n");
     printf("3rd Multiplication \n");
     printf("4th Division \n");
     scanf("%d",&c);
     if(c==1)
     printf("Addition is %d",a+b);
      if(c==2)
     printf("Subtraction is %d",a-b);
      if(c==3)
     printf("Multiplication is %d",a*b);
      if(c==4)
     printf("Division is %f",(float)a/b);
     return 0;
     }
