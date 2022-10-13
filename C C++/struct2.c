#include<stdio.h>
struct student
{
    char name[30];
    int roll;
    int marks[5];
    int total;
    float percentage;
};
int main()
{ int n,i,j,k,r;
 printf("Enter the no. of student ");
 scanf("%d",&n);
struct student s[n];
for(i=0;i<n;i++)
{
    printf("\nEnter the name of student %d ",i+1);
    scanf("%s",s[i].name);
    printf("\nEnter the roll no. of student %d ",i+1);
    scanf("%d",&s[i].roll);
    for(j=0;j<5;j++)
    {
      printf("\nEnter the marks %d ",j+1);
      scanf("%d",&s[i].marks[j]);
    }
   
 s[i].percentage=0.0;
 s[i].total=0;
for(k=0;k<5;k++)
{s[i].total = s[i].total+ s[i].marks[k];
 s[i].percentage = s[i].percentage+ s[i].marks[k] * 0.2;
}
printf("\nStudent's Total Marks %d", s[i].total);
printf("\nStudent's percentage %f", s[i].percentage);
}
printf("\n-------Student Details");
printf("\nEnter the Roll no.");
scanf("%d",&r);
for(i=0;i<n;i++)
{if(r==s[i].roll)
{printf("\nName : %s",s[i].name);
printf("\nRoll : %d",&s[i].roll);
for(j=0;j<5;j++)
{printf("\nMarks%d %d",j+1,s[i].marks[j]);
}
printf("\nStudent's Total Marks %d", s[i].total);
printf("\nStudent's percentage %f", s[i].percentage);
}
}
}
