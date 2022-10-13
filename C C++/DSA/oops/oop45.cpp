// 3.WAP to remove characters in string except alphabets
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int size, i;
    cout<<"Enter the size of the string : ";
    cin>>size;
    char str[size];
   cout<<"Enter the Character : ";
    for(i = 0; i<size; i++)
    {
        cin>>str[i];
    }
    cout<<"String containing only alphabet : ";
     for(i = 0; i<size; i++)
     {
        if(str[i]>='a'&& str[i]<='z' || str[i]>='A'&& str[i]<='Z')
        cout<<str[i];
     }
}
