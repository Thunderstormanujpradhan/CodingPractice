// 5.WAP to reverse a string using recursion.
#include<iostream>
using namespace std;
void recursion(char *str)
{
    if(str != "\0")
    {
        recursion(str+1);
        cout<<str;
    }
}
int main()
{
    int size, i;
    cout<<"Enter the size of the string : ";
    cin>>size;
    char str[size];
    cout<<"Enter the character : ";
    for(i = 0; i<size; i++)
    cin>>str[i];
    recursion(str);
}