//LE1.1 Write a program to demonstrate the concept of call-by-value, call-by-reference & call-by-
//address by taking swapping of two numbers as an example.
#include<iostream>
using namespace std;
void swap1(int a, int b)    
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"Swapped number are "<<a<<" and "<<b;
}
int swap(int *c, int *d)
{
    int *temp;
    temp=c;
    c=d;
    d=temp;
   cout<<"Swapped number are "<<*c<<" and "<<*d;

}
void swap(int &c, int &d);
void swap1(int a, int b);
int main()
{
    int a,b,c,d;
    cout<<"Enter two number : ";
    cin>>a>>b;
    swap1(a,b);  //call by value
    cout<<endl;
    cout<<"Enter two number ";
    cin>>c>>d;
   swap(&c,&d);//call by address
   

}