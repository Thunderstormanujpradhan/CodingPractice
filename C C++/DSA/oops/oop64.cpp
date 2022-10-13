// 2.WAP to sort a set of names stored in an array in alphabetical order.
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  char names[10][10], temp[10];      //creating two character arrays, one for storing and one for interchanging
  int i, j;
  cout<<"Enter any 10 names  : ";
  for(i=0; i<10; i++)
  {
    cin>>names[i];
  }
  for(i=10; i>=0; i--)                 //bubble sort begins to sort the data 
  {
    for(j=0; j<=i; j++)
    {
      if(strcmp(names[j], names[j+1])>0)       //comparing only the ASCII equivalent of the entire word and interchanging if greater
      {
        strcpy(temp, names[j]);
        strcpy(names[j], names[j+1]);
        strcpy(names[j+1], temp);
      }
    }
  }
  cout<<"Names rearranged in alphabetical order : \n";
  for(i=0; i<10; i++)
  {
    cout<<names[i]<<"\n";
  }
  return 0;
}