//Create a class student which stores name, roll number and age of a student. Derive a class test from student class, which stores marks in 5 subjects. Input and display the details of a student
#include<iostream>
using namespace std;

class student{

    protected :

    char name[30];
    int roll;
    int age;
    
    
};

class test : public student
{
    protected :

    int sub1, sub2, sub3, sub4, sub5;

    public :

    void getData()
    {
        cout<<"Enter the student name : ";
        cin>>name;
        cout<<"Enter student roll number : ";
        cin>>roll;
        cout<<"Enter student age : ";
        cin>>age;
        cout<<"Enter marks in 5 subjects : ";
        cin>>sub1>>sub2>>sub3>>sub4>>sub5;
        

    }
    void displayData()
    {
        cout<<"Name of the student : "<<name;
        cout<<"\nStudent roll no. : "<<roll;
        cout<<"\nStudent age : "<<age;
        cout<<"\nMarks in 5 subject : \n"<<sub1<<"\n"<<sub2<<"\n"<<sub3<<"\n"<<sub4<<"\n"<<sub5;
    }
};

int main()
{
    test a;
    a.getData();
    a.displayData();
}