#include<stdio.h>
struct name {
    char fname[50],mname[50],lname[50];
};
struct date {
    int dd,mm,yyyy;
};
struct employee {
    struct name name;
    struct date dob;
    int accno;
    int balc;
};
void input(int n,struct employee e[n]) {
    for(int i=0;i<n;i++) {
        printf("Enter employee details for employee %d :-\n",i+1);
        printf("Enter the full name : ");
        fflush(stdin);
        scanf("%s%s%s",e[i].name.fname,e[i].name.mname,e[i].name.lname);
        printf("Enter the date of birth (DD/MM/YYYY) : ");
        scanf("%d%d%d",&e[i].dob.dd,&e[i].dob.mm,&e[i].dob.yyyy);
        printf("Enter the account number : ");
        scanf("%d",&e[i].accno);
        printf("Enter the balance in $ : ");
        scanf("%d",&e[i].balc);
    }
}
void balanceless200(int n,struct employee e[n]) {
    int c=1;
    printf("\nThe names of all employee having balance less than $200 :-\n");
    for(int i=0;i<n;i++) {
        if(e[i].balc<200) {
            printf("%d.\n",c++);
            printf("Name = %s %s %s\n",e[i].name.fname,e[i].name.mname,e[i].name.lname);
            printf("Date of birth = %d %d %d\n",e[i].dob.dd,e[i].dob.mm,e[i].dob.yyyy);
            printf("Account number = %d\n",e[i].accno);
            printf("Balance in $ = %d\n",e[i].balc);
        }
    }
    if(c==1)
    printf("No employee exists!");
}
void balancemore1000(int n,struct employee e[n]) {
    int c=1;
    printf("\nThe names of all employee having balance more than $1000 with an increment of $100 :-\n");
    for(int i=0;i<n;i++) {
        if(e[i].balc>1000) {
            e[i].balc+=100;
            printf("%d.\n",c++);
            printf("Name = %s %s %s\n",e[i].name.fname,e[i].name.mname,e[i].name.lname);
            printf("Date of birth = %d %d %d\n",e[i].dob.dd,e[i].dob.mm,e[i].dob.yyyy);
            printf("Account number = %d\n",e[i].accno);
            printf("Balance in $ = %d\n",e[i].balc);
        }
    }
    if(c==1)
    printf("No employee exists!");
}
int main() {
    int n;
    printf("Enter the number of employee(s) : ");
    scanf("%d",&n);
    struct employee e[n];
    input(n,e);
    balanceless200(n,e);
    balancemore1000(n,e);
    return 0;
}