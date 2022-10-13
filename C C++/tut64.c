//Returning a structure variable from the function
#include<stdio.h>
struct student
{
    int x;
    int y;
};
void edit(struct student n)
{
    n.x=n.x+4;
    n.y=2*n.y;
    
}
void print( struct student s)
{
    printf("%d %d\n",s.x,s.y);
}
int main()
{struct student s1={21,22};
struct student s2={23,43};
s1=edit(s1);
s2=edit(s2);
print(s1);
print(s2);
}