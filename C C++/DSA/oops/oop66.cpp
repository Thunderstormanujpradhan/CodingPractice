// 4.WAP to input a two dimensional array and print lower triangular matrix and upper triangular matrix.
// Lower triangular matrix is a matrix which contains elements below principle diagonal including
// principle diagonal elements and rest of the elements are 0. Upper triangular matrix is a matrix which
// contains elements above principle diagonal including principle diagonal elements and rest of the
// elements are 0.
#include<iostream>
using namespace std;
int main() {
   int rows, cols, r, c, matrix[10][10];
 
   cout<<"Please enter the number of rows for the matrix: ";
   cin>>rows;
   cout<<"\n";
   cout<<"Please enter the number of columns for the matrix: ";
   cin>>cols;
   cout<<"\n";
   cout<<"Please enter the elements for the Matrix: \n";
   for(r = 0; r < rows; r++){
      for(c = 0;c < cols;c++){
         cin>>matrix[r][c];
      }
   }
   cout<<"\n The Lower Triangular Matrix is: ";
   for(r = 0; r < rows; r++){
      cout<<"\n";
      for(c = 0; c < cols; c++){
      if(r >= c){
         cout<<matrix[r][c]<<"\t";
      }
      else{
         cout<<"0";
         cout<<"\t";
      }
   }
   }
   cout<<"\n\n The Upper Triangular Matrix is: ";
   for(r = 0; r < rows; r++){
      cout<<"\n";
      for(c = 0; c < cols; c++){
         if(r > c){
            cout<<"0";
            cout<<"\t";
         }
         else{
            cout<<matrix[r][c]<<"\t";

         }
      }
   }
   
   return 0;
}