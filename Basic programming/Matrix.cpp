// We'll try to make a matrix using dynamic constructor

#include <iostream>
using namespace std ;

class Matrix
{
    int row ;
    int column ;
    int **mat ;          // pointer to the two dimensional array of type int
    public:
    Matrix () {} ; 
    Matrix(int row , int column) ;
    void create() ;
    void display() ;
    friend Matrix transpose (Matrix mat) ;  // getting some bug in transpose , need to debug it 
};

Matrix :: Matrix(int row , int column)
{
    this->row = row ;
    this->column = column ;
    mat = new int * [row] ;
    for (int i = 0 ; i<column  ; i++)
    {
        mat[i] = new int [column] ;
    }

}

void Matrix :: create( )
{
    cout << "Enter values (total " << row * column << " entries) :" << endl ;
    for (int i = 0 ; i< row ; i++)
    {
        for (int j = 0 ; j< column ; j++)
        {
            cin >> mat[i][j] ;
        }
    }
}

void Matrix :: display()
{
    cout << "Matrix :" <<endl ;
    for (int i = 0 ; i < row ; i++)
    {
        for (int j = 0 ; j< column ; j++)
        {
            cout << mat[i][j] << " " ;
        }
        cout << endl ;
    }
}

Matrix transpose(Matrix mat1)
{
    Matrix t_pose(mat1.column , mat1.row)  ;
    for (int i = 0 ; i < mat1.row ; i++)
    {
        for ( int j = 0 ; j< mat1.column ; j++)
        {
            t_pose.mat[j][i] = mat1.mat[i][j] ;
        }
    }
    return t_pose ;
}


int main()
{
    int row , column ; 
    cout << "Enter row and column(space separated ) : " ;
    cin >> row >> column ; 
    Matrix mat1(row , column) ;
    mat1.create() ;
    mat1.display() ;
    Matrix mat2 ;
    mat2 = transpose(mat1) ;
    cout << "Transpose of the matrix :\n"  ;
    mat2.display() ;


    return 0 ;

}
