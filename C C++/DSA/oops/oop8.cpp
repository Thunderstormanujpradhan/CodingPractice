#include<iostream>
using namespace std;
class employ
{
private:
    int id;
    char name[30];
    int age;
    int basicsalary;
    float grosssalary=0;
public:
void getdata()
{
    cout<<"Enter id, name, age and basic salary ";
    cin>>id>>name>>age>>basicsalary;
}
void displaydata()
{   grosssalary=grosssalary + 0.8 * basicsalary + 0.1 * basicsalary;
    cout<<id<<"\t\t"<<name<<"\t\t"<<age<<"\t\t"<<grosssalary<<endl;
}
   
};
int main()
{ int n,j;
    cout<<"Enter the number of employee ";
    cin>>n;
    employ emp[n];
    for(j=0;j<n;j++)
    {emp[j].getdata();
    }
    for(j=0;j<n;j++)
    {emp[j].displaydata();
    }


}



