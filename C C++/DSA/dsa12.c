//WAP to add 2 distances (in Km - Mtr) represented in the form of structure by passing structure to function.
#include<stdio.h>
struct dist
{
    int km;
    int mtr;
};
void add(struct dist d1, struct dist d2)
{
    struct dist d3;
    d3.km=d1.km+d2.km;
    d3.mtr=d1.mtr+d2.mtr;
    d3.km=d3.km+d3.mtr/1000;
    d3.mtr=d3.mtr%1000;
    printf("Distance is %d km %d m",d3.km,d3.mtr);
}
int main()
{
    struct dist d1,d2;
     printf("Enter 1st distance in km and mtr:");
    scanf("%d%d",&d1.km, &d1.mtr);

    printf("Enter 2nd distance in km and mtr:");
    scanf("%d%d",&d2.km, &d2.mtr);
    add(d1,d2);
    return 0;

}