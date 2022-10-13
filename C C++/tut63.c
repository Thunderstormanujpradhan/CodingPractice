//Passing pointer to structure  as an argument
#include<stdio.h>
struct student 
{
    int x;
    int y;
};
void print(struct student *ptr)
{
    printf("%d %d\n",ptr->x,ptr->y);
}
int main()
{
    struct student s1={22,21};
    struct student s2={20,32};
    print(&s1);
    print(&s2);  //Call by address 
}