// 1.WAP to find the norm of a matrix. The norm is defined as the square root of the sum of squares of
// all elements in the matrix.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int size = 0, i, j, sum =0;
    cout<<"Enter the size of the matrix : ";
    cin >> size;
    int arr[size][size];
    cout<<"Enter the elements of the matrix : ";
    for(i = 0; i<size; i++)
    {
       for(j = 0; j<size; j++)
       {
        cin>>arr[i][j];
       }
    }
    for(i = 0; i<size; i++)
    {
        for(j = 0; j<size; j++)
        {
            sum = sum + ((arr[i][j])*(arr[i][j]));
        }
    }
  cout<<"Norm of the matrix is : "<<sqrt(sum);

}