// By changing the number of arguments or by having different types of arguments to a function,
// function overloading can be achieved. Write a program to demonstrate these two concepts by
// taking addition of numbers as an example. Use ADD function name for function overloading
// purpose.
#include <iostream>
using namespace std;

void ADD(int a,int b=10,int c=0)
{
    cout<<"Sum:"<<a+b+c<<endl;
}

void ADD(float x,float y)
{
    cout<<"Sum"<<x+y<<endl;
}


int main()
{ int a,b,c;
  float x,y;

 cin>>a>>b>>c;
 cin>>x>>y;


    ADD(a,b);
    ADD(a,b,c);
    ADD(x,y);

}