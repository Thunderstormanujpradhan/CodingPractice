// Write a program to find out area or volume of an shape/object by using one function name as
// FUN-AREA only. If the function takes one argumnet then it will calculate area of a circle, two
// argument for area of rectangle and three argumnet volume of a box. If no argumnet is given to
// the function, then it will display appropriate message.
#include <iostream>
using namespace std;
#define PI 3.14
void FUNC_AREA()
{
    cout<<"Enter valid argument";
}
void FUNC_AREA(int r)
{
    cout<<"\nArea of circle is "<<PI*r*r;
}
void FUNC_AREA(int l, int b, int h)
{
    cout<<"\nVolume of box is "<<l*b*h;
}
void FUNC_AREA(int l, int b)
{
    cout<<"\nArea of rectangle is "<<l*b<<"\n";
}

 int main()
 {
    int r,l,b,h;
    cout<<"Enter the radius of the circle";
    cin>>r;
    cout<<"Enter the length breadth and height of the box";
    cin>>l>>b>>h;
    FUNC_AREA();//If No Paramater Is Entered 
    FUNC_AREA(r);// id only radius is Passed
    FUNC_AREA(l,b,h);
    FUNC_AREA(l,b);

        

    return 0;
 }