//Student details using class
#include<iostream>
using namespace std;
class student
{
    private:
    char name[30];
    int roll;
    int totalmarks;
    public:
    void getdata()
    {cout<<"Enter the name, roll and total marks of student ";
    cin>>name>>roll>>totalmarks;
    }
    void displaydata()
    {
        cout<<"Name : "<<name<<endl<<"roll : "<<endl<<"Total Marks : "<<totalmarks<<endl;
    }
};
int main()
{student s;
 s.getdata();
 cout<<"Student Details "<<endl;
 s.displaydata();
 return 0;



}