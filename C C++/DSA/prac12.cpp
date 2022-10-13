//Employ details
#include<iostream>
using namespace std;
class employ{
     private :
     int id;
     char name[30];
     int sal;
     public :
     void getdata()
     {
        cout<<"Enter employee id , name and salary : ";
        
        cin>>id>>name>>sal;
     }
     void display_data()
     {
        
        cout<<"Name : "<<name<<endl<<"ID : "<<id<<endl<<"Salary : "<<sal<<endl;
     }
};
int main()
{
    int n,k;
    cout<<"Enter the no. of employs : ";
    cin>>n;
    employ emp[n];
    for(k=0;k<n;k++)
    emp[k].getdata();
    for(k=0;k<n;k++)
    emp[k].display_data();

}