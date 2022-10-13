// Write a program to find out the area of a circle and volume of a sphere by using function
// overloading concept. (Use one function name as AREA-VOL)
#include<iostream>
using namespace std;
double AREA_VOL(double r1)
{
    float area;
    area=3.14*r1*r1;
    
   cout<<"area = "<<area<<endl;
}
float AREA_VOL(float r2)
{
    float vol;
    vol=((4*1.0)/(3.0))*3.14*r2*r2*r2;
    cout<<"Volume = "<<vol;
}

int main()
{   double r1;
    float r2;
    cout<<"Enter the radius of the circle and sphere : ";
    cin>>r1>>r2;
    AREA_VOL(r1);
     AREA_VOL(r2);

}