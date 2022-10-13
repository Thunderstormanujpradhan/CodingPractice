// Write a program to find out area or volume of an shape/object by using one function name as
// FUN-AREA only. If the function takes one argumnet then it will calculate area of a circle, two
// argument for area of rectangle and three argumnet volume of a box. If no argumnet is given to
// the function, then it will display appropriate message.
#include<iostream>
using namespace std;
void FUN_AREA(int a=-1,int b=-1,int c=-1) {
    if(a==-1&&b==-1&&c==-1)
    cout<<"\nNo argument!";
    else if(b==-1&&c==-1)
    cout<<"\nArea of the circle = "<<3.14*a*a;
    else if(c==-1)
    cout<<"\nArea of the rectangle = "<<a*b;
    else
    cout<<"\nVolume of the box = "<<a*b*c;
}
int main() {
    int n,a,b,c;
    cout<<"Enter number of argument(s) : ";
    cin>>n;
    if(n<0||n>3) {
        cout<<"\nInvalid input!";
        exit(0);
    }
    if(n==0)
    FUN_AREA();
    else if(n==1) {
        cout<<"Enter one input : ";
        cin>>a;
        if(a<0) {
            cout<<"\nInvalid input!";
            exit(0);
        }
        FUN_AREA(a);
    }
    else if(n==2) {
        cout<<"Enter two inputs : ";
        cin>>a>>b;
        if(a<0||b<0) {
            cout<<"\nInvalid input!";
            exit(0);
        }
        FUN_AREA(a,b);
    }
    else if(n==3) {
        cout<<"Enter three inputs : ";
        cin>>a>>b>>c;
        if(a<0||b<0||c<0) {
            cout<<"\nInvalid input!";
            exit(0);
        }
        FUN_AREA(a,b,c);
    }
    return 0;
}