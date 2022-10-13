#include<iostream>
using namespace std;
class  student
{ private:
int marks[5];
char name[30];
int roll;
int totalmarks=0;
float perc=0;
public:
void getdata()
{ int i,j;
    cout<<"Enter the name, roll  ";
    cin>>name>>roll;
    cout<<"Enter marks ";
    for(i=0;i<5;i++)
    cin>>marks[i];
    for(j=0;j<5;j++)
    totalmarks=totalmarks+marks[j];
    perc=((totalmarks*1.0)/500)*100;
}
void displaydata()
{
    cout<<name<<endl<<roll<<endl<<totalmarks<<endl<<perc<<"%";
   
 }
};
int main()
{ student s;
s.getdata();
s.displaydata();

}