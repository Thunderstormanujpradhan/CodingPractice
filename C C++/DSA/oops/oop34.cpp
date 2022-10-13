// Write a rogram to compute absolute value of a number (integer or float) by using function
// overloading for computation of absolute value. The number is entered through keyboard.
#include <iostream>
using namespace std;
float func(float radius){
    
    
    cout<<3.14*radius*radius;
}
int func(int radius){           //Using same function name with some argument.

   cout<<(1.0*4)/3*3.14*radius*radius*radius<<endl;


}
int main()
{
    int radius;
    cout<<"Enter Radius : ";
    cin>>radius;

    cout<<"The Area of Circle is :";
    func((float)radius);

    cout<<"\nThe Volume of Sphere is :";
    func((int)radius);



    }