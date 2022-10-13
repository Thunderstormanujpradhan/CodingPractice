// WAP to enter id, name and basic salary of n number of employees. Calculate the
// gross salary of all the employees and display it along with all other details in 
// a tabular form.
#include <stdio.h>
struct employee{
char emp_name[50];
int emp_id;
int age;
int sal;
};
int main(){
int n, netSal;
printf("Enter the number of employees: ");
scanf("%d", &n);
struct employee e[n];
for(int i=0; i<n; i++){
printf("\n");
printf("Employee %d=> \n", i+1);
printf("Employee name: ");
scanf("%s", &e[i].emp_name);
printf("Employee ID: ");
scanf("%d", &e[i].emp_id);
printf("Age: ");
scanf("%d", &e[i].age);
printf("Basic salary: ");
scanf("%d", &e[i].sal);
e[i].sal=e[i].sal+(80*e[i].sal)/100+(10*e[i].sal)/100;
}
//Displaying employee details
printf("\n\n__________Employee Details___________\n\n");
for(int i=0; i<n; i++){
printf("Employee name \t\t: ");
printf("%s \n", e[i].emp_name);
printf("Employee ID \t\t: ");
printf("%d \n", e[i].emp_id);
printf("Gross Salary \t\t: ");
printf("%d \n",e[i].sal);
printf("\n");
}
return 0;
}