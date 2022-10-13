//WAP to input name, roll and marks in 5 subjects for a student and display it.
#include<stdio.h>

    struct student
    {char name[20];
       int roll;
        int marks[5];
    };
    int main()
 {struct student s;
 int i;
 
 printf("Enter the details of a student");
 printf("\nEnter the name of a student ");
 scanf("%[^\n]s%*c",s.name);
printf("\nEnter roll no.");
scanf("%d%*c",&s.roll);
for(i=0;i<5;i++)
{printf("\nEnter your %d marks ",i+1);
scanf("%d",&s.marks[i]);
}
printf("Student name : %s",s.name);
printf("\nStudent roll : %d",s.roll);
printf("\nMarks of the student are : ");
for(i=0;i<5;i++)
printf("%d ",s.marks[i]);
 }
