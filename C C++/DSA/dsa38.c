#include<stdio.h>
struct student {
    char name[100];
    int roll;
    int marks[5];
    float percent;
    char grade;
};
void input_2327(int n,struct student s[n]) {
    for(int i=0;i<n;i++) {
        printf("Enter student details for student %d :-\n",i+1);
        printf("Enter the name : ");
        fflush(stdin);
        gets(s[i].name);
        printf("Enter the roll number : ");
        scanf("%d",&s[i].roll);
        printf("Enter the marks of 5 subjects : ");
        for(int j=0;j<5;j++)
        scanf("%d",&s[i].marks[j]);
    }
}
void calc(int n,struct student s[n]) {
    int tmarks;
    for(int i=0;i<n;i++) {
        tmarks=0;
        for(int j=0;j<5;j++)
        tmarks+=s[i].marks[j];
        s[i].percent=tmarks/5.;
        if(s[i].percent>=90)
        s[i].grade='O';
        else if(s[i].percent>=80)
        s[i].grade='A';
        else if(s[i].percent>=70)
        s[i].grade='B';
        else if(s[i].percent>=60)
        s[i].grade='C';
        else if(s[i].percent>=40)
        s[i].grade='D';
        else
        s[i].grade='F';
    }
}
void sort(int n,struct student s[n]) {
    struct student temp;
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-i-1;j++) {
            if(s[j].percent>s[j+1].percent) {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    printf("\nThe list of sorted student(s) :-\n");
    for(int i=0;i<n;i++) {
        printf("%d. ",i+1);
        printf("Name = %s\n",s[i].name);
        printf("Roll number = %d\n",s[i].roll);
        printf("Marks in 5 subjects = ");
        for(int j=0;j<5;j++)
        printf("%d ",s[i].marks[j]);
        printf("\n");
        printf("Percentage = %.2f\n",s[i].percent);
        printf("Grade = %c\n",s[i].grade);
    }
}
int main() {
    int n;
    printf("Enter the number of student(s) : ");
    scanf("%d",&n);
    struct student s[n];
    input_2327(n,s);
    calc(n,s);
    sort(n,s);
    return 0;
}