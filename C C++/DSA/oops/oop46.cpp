// 4.WAP to input a two dimensional array and print lower triangular matrix and upper triangular matrix.
// Lower triangular matrix is a matrix which contains elements below principle diagonal including
// principle diagonal elements and rest of the elements are 0. Upper triangular matrix is a matrix which
// contains elements above principle diagonal including principle diagonal elements and rest of the
// elements are 0.
#include<iostream>
using namespace std;
int main()
{
    int size,i ,j;
    cout<<"Enter the row size of the square matrix : ";
    cin>>size;
    int arr[size][size];
    cout<<"Enter the elements of the matrix : ";
    for(i = 0; i<size; i++)
    {
        for(j = 0; j<size; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<"Lower triangular matrix is : "<<endl;
    for(i = 0; i<size; i++)
    {
        for(j = 0; j<size; j++)
        {
            if(i==j || i>j)
            cout<<arr[i][j]<<"\t";
            else
            cout<<"0"<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Upper triangular matrix is : "<<endl;
    for(i = 0; i<size; i++)
    {
        for(j = 0; j<size; j++)
        {
            if(i==j || i<j)
            cout<<arr[i][j]<<"\t";
            else
            cout<<"0"<<"\t";
        }
        cout<<endl;
    }
}