// (Multipath Inheritance) Design a base class called Student with two fields:- (i) Name (ii) roll
// number. Derive two classes called Sports and Exam from the Student base class. Class Sports
// has a field called s_grade and class Exam has a field called e_grade which are integer fields.
// Derive a class called Results which inherit from Sports and Exam. This class has a character
// array or string field to represent the final result. Also it has a member function called display
// which can be used to display the final result. Illustrate the usage of these classes in main.\

#include<iostream>
using namespace std;



class Sports
{
  protected :

  int s_grade;

  public : 

  void getdata1()
  {
    cout<<"Enter the sports marks : ";
    cin>>s_grade;
  }
};

class Exam
{
    protected :

    int e_grade;

    public :

    void getdata2()
    {
        cout<<"Enter the Exam marks : ";
        cin>>e_grade;
    }
};

class Student : public Sports, public Exam
{
    protected :

    char name;
    int roll;

    public :

    void getdata()
    {
        cout<<"Enter the name of the student : ";
        cin>>name;
        cout<<"Enter the roll number :";
        cin>>roll;
        getdata1();
        getdata2();
    }



};