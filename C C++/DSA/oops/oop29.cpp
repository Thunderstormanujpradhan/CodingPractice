// LE1.1 Write a program to demonstrate the concept of call-by-value, call-by-reference & call-by-
// address by taking swapping of two numbers as an example.
#include<iostream>
using namespace std;

    void callByValue(int a,int b)
    {
        int temp;
        temp=a;
        a=b;
        b=temp;
               
    }
    void CallByRefernce(int &a, int &b){

       int temp=a;
        a=b;
        b=temp;
    }
    void CallByAddress(int*x,int *y){
        int temp= *x;
        *x=*y;
        *y=temp;

}

 int main(){

    int a=1,b=2;
    cout<< "Before swapping the Value Of a= "<<a<<" b= "<<b<<endl;

    callByValue(a,b);
    cout<<"swaping using call By Value: "<<a<<" "<<b<<endl;
    CallByRefernce(a,b);
    cout<<"The Value Of a & b after Call By refrence is:"<<a<<" "<<b<<endl;
    a=1;
    b=2;
    CallByAddress(&a,&b);
    cout<<"The Value Of a & b using Call By Address after reinitialization is:"<<a<<" "<<b<<endl;


 }