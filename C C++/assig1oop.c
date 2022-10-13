#include <stdio.h>

struct student {
char name[50];
int roll;
int marks[5];
} s;

int main() 
{
printf("Enters's name: ");
fgets(s.name, sizeof(s.name), stdin);

printf("Enter roll number: ");
scanf("%d", &s.roll);
printf("Enter marks: \n");

for (int i = 0; i < 5; i++) {
 printf("Enter marks in subject %d: ", i+1);
 scanf("%d", &s.marks[i]);
}

 printf("\n---- Student Information -----\n");
 printf("Student's name: %s", s.name);
 printf("Student's roll number: %d\n", s.roll);
printf("Student's marks: "); 
for (int i = 0; i < 5; i++) {
 printf("%d ",s.marks[i]);
 }

return 0;
}