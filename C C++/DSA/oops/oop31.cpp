// Write a program to find out the area of a circle and volume of a sphere by using function
// overloading concept. (Use one function name as AREA-VOL)
#include <iostream>
using namespace std;
void AREA_VOL(){
    
    int radius=5;
    cout<<3.14*radius*radius;
}
void AREA_VOL(int radius){           //Using same function name with some argument.

   cout<<(1.0*4)/3*3.14*radius*radius*radius<<endl;


}
int main()
{
    int radius;
    cout<<"Enter Radius : ";
    cin>>radius;

    cout<<"The Area of Circle is :";
    AREA_VOL();

    cout<<"\nThe Volume of Sphere is :";
    AREA_VOL(radius);



    }