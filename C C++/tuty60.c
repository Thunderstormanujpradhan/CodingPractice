// Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. 2.
#include<stdio.h>
struct student
{
    int roll;
    char name[30];
    int age;
};
struct student s[5];
int main()
{ int i;
 for(i=0;i<5;i++)
 {
    printf("\nEnter the details of student %d\n",i+1);
   
    printf("Enter the name of student ");
    scanf("%[^\n]s",s[i].name);
    printf("Enter the roll no ");
    scanf("%d",&s[i].roll);
    printf("Enter the age of student ");
  scanf("%d%*c",&s[i].age);

 }
 
 for(i=0;i<5;i++)
 { if(s[i].roll==2)
   { printf("\n%s\n%d\n%d",s[i].name,s[i].roll,s[i].age);
   }
 }

   
}