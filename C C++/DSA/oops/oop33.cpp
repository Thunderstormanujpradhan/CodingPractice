// Write a program to find the summation of three numbers by using one function only with
// function name SUM having three arguments. If at run time one argumnet is given to the
// function SUM, then second and third argument will be assumed by default as 10 and 20
// respectively. If two argumnets are given at run time, then thrird argument will be assumed as 20.
// Use function with default argument concepts.
#include <iostream>
using namespace std;

void sum(int a,int b=10,int c=20)
{
    cout<<"Sum:"<<a+b+c<<endl;
}

int main()
{ int a,b,c;
 cin>>a>>b>>c;

    sum(a);
    sum(a,b);
    sum(a,b,c);
}