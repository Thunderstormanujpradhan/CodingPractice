//Passing whole copy as aargument
#include<stdio.h>
struct student
{
    int x;
    int y;
};
void print(struct student s)
{
    printf("%d %d",s.x,s.y);
}
int main()
{
    struct student s1={22,21};
    struct student s2={20,12};
    print(s1);
    print(s2);
}