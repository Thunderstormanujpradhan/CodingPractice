// 2.WAP to sort a set of names stored in an array in alphabetical order.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int number, i, j;
    char temp[20];
   cout<<"Enter the number of names : ";
   cin>>number;
   char Name[number][20];
   cout<<"Enter the name : ";
    for(i = 0; i<number; i++)
    {
       cin>>Name[i];
    }
    for(i = 0; i<number; i++)
    {
        for(j = i+1; j<number; j++)
        {
            if(strcmp(Name[i] , Name[j])>0)
            {
                strcpy(temp, Name[i]);
                strcpy(Name[i], Name[j]);
                strcpy(Name[j], temp);
            }
        }
    }
    cout<<"Sortd names are :"<<endl;
    for(i = 0; i<number; i++)
    {
        cout<<Name[i]<<endl;
    }
}
