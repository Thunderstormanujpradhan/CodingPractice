// 1.WAP to find the norm of a matrix. The norm is defined as the square root of the sum of squares of
// all elements in the matrix.
#include<iostream>
using namespace std;
class matrix{
    private :
    int row;
    int col;
    int** data = nullptr;
    public :
    matrix()
    {
        std::cout << "Created" << std::endl;
    }
    void getdata()
    {
        cout("Enter the size of matrix : ");
        cin("%d%d",&row,&col);
        data = new int*[row];
        for (int i = 0; i < row; i++)
        {
            data[i] = new int[col];
        }
        for(int i = 0; i<row; i++)
        {
            for(int j = 0; j<col; j++)
            {
                cin("%d",&data[i][j]);
            }
        }
    }

    ~matrix()
    {
        std::cout << "Destroyed" << std::endl;
        for (int i = 0; i < row; i++)
        {
            delete[] data[i];
        }

        delete[] data;
    }
};
int main()
{
    {
        matrix m;
    }
    // matrix m;
    // printf("Enter the elements of the matrix : ");
    // m.getdata();
}