// Write a program to store and print the roll no., name , age and marks of a student using structures.
#include<stdio.h>
struct student
{
    int roll;
    char name[30];
    int age;
    int marks[5];
};
struct student s;
int main()
{  int i;
    printf("Enter the name of a student ");
    scanf("%[^\n]s",s.name);
    printf("Enter the roll no ");
    scanf("%d",&s.roll);
    printf("Enter the age of a student ");
    scanf("%d",&s.age);
    printf("Enter the marks of a student ");
    for(i=0;i<5;i++)
    scanf("%d",&s.marks[i]);

    printf("%s\n%d\n%d",s.name,s.roll,s.age);
    printf("\n");
    for(i=0;i<5;i++)
    printf("%d ",s.marks[i]);
}