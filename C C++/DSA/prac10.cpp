//student details using class and objects
#include<iostream>
using namespace std;
class stud{
    private :
    int roll;
    char name[30];
    int marks;
    public :
    void getdata()
    {
       
        cout<<"Enter the student name, roll and total marks :";
        cin>>name>>roll>>marks;
        
    }
    void display_data()
    {
        cout<<"name : "<<name<<endl<<"roll : "<<roll<<endl<<"Total marks : "<<marks<<endl;
    }
  
};
int main()
{    stud s;
     cout<<"Enter the student details : "<<endl;
     s.getdata();
     s.display_data();
}