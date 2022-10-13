// WAP to implement the following function on the time value where the time is one structure element containing hour, minutes and second as the data member.
// i.Addition of 2 time value
// ii.Subtraction of 2 time value 
// Note: Check the validity of result after operation
#include<stdio.h>
struct Time
{
   int hr;
   int min;
   int sec;
};
 void add(struct Time t1,struct Time t2)
 {
    struct Time t3;
    t3.hr=t1.hr+t2.hr;
    t3.min=t1.min+t2.min;
    t3.sec=t1.sec+t2.sec;
    t3.hr=t3.hr+t3.min/60+t3.sec/3600;
    t3.min=t3.min%60+t3.sec/60;
    t3.sec=t3.sec%60;
    printf("Total time is %d hr %d min %d sec",t3.hr,t3.min,t3.sec);
 }
  void sub(struct Time t1,struct Time t2)
 {
    struct Time t3;
    t3.hr=t1.hr-t2.hr;

 }



int main()
{
    struct Time t1,t2;
    printf("Enter the time1 ");
    scanf("%d%d%d",&t1.hr,&t1.min,&t1.sec);
    printf("Enter the time2 ");
    scanf("%d%d%d",&t2.hr,&t2.min,&t2.sec);
    add(t1,t2);
    sub(t1,t2);
}