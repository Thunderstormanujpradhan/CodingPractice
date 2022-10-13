//WAP to store employee information as name, gender, department, basic pay, gross pay using 1 array of structure where gross pay is not an user input. Calculate the gross pay using the following formula and assign the value in the individual employee's gross pay entry. Gross pay = basic pay + HR + DA,          where HR = 25% of basic and DA = 75% of basic
#include<stdio.h>
struct employee
{
    char name[30];
    char gender;
    int basicpay;
    float grosspay;
    float hr;
    float da;


};
int main()
{ int n,i;
  printf("Enter the no. of employee ");
  scanf("%d",&n);
  struct employee e[n];
  for(i=0;i<n;i++)
  {
    printf("Enter the details of employee %d ",i+1);
    scanf("%s %c %d",e[i].name, &e[i].gender, &e[i].basicpay);
  }
  for(i=0;i<n;i++)
  {
    e[i].hr=e[i].basicpay * 0.25;
    e[i].da=e[i].basicpay * 0.75;
    e[i].grosspay=e[i].basicpay + e[i].hr + e[i].da;
    printf("%s %c %f\n",e[i].name,e[i].gender,e[i].grosspay);
  }

return 0;
}