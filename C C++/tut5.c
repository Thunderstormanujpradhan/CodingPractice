#include<stdio.h>
int main()
{
 int h1, m1 ,s1, h2 ,m2, s2, h ,m ,s;
 printf("enter h1");
 scanf("%d",&h1);
 printf("enter m1");
 scanf("%d",&m1);
 printf("enter s1");
 scanf("%d",&s1);
 printf("enter h2");
 scanf("%d",&h2);
 printf("enter m2");
 scanf("%d",&m2);
 printf("enter s2");
 scanf("%d",&s2);
s=(s1+s2)%60;
m=(((s1+s2)/60)+m1+m2);
m=m%60;
h=h1+h2+((s1+s2)/3600)+((m1+m2)/60);
printf(" %d  %d  %d",h,m,s);
 return 0;
 
 

}