// Write a program to perform addition of two complex numbers using constructor. Complex
// numbers are given through user input.
#include<iostream>
using namespace std;

class Complex{

   private :

   int real;
   int img;
   
   public :

   Complex(){};
   void getdata()
   {
      cout<<"Enter the real and imaginary part of the complex number : ";
      cin>>real>>img;
   }
   void display()
   {
    cout<<"Sum of the two complex number is : ";
    cout<<real<<" + "<<img<<"i";
   }
   void add(Complex,Complex);
};

void Complex :: add(Complex c1, Complex c2)
{
    real = c1.real +c2.real;
    img = c1.img + c2.img;

}

int main()
{
    Complex c1, c2,x;
    c1.getdata();
    c2.getdata();
    x.add(c1, c2);
    x.display();

}