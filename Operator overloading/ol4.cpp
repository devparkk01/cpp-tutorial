#include<iostream>
using namespace std ;

class Matrix
{
    int data[3][3] ;

    public :
    void get_data () ;
    Matrix operator + (Matrix mat1 ) ;
    void operator - ( ) ;
    void display () ;
    Matrix transpose () ;

} ;

void Matrix :: get_data()
{
    cout << "Enter entries of the matrix : \n"  ;
    for (int i = 0 ; i<3 ; i++)
    {
        for (int j =0 ; j<3 ; j++)
        {
            cin >> data[i][j] ;
        }
    }

}

Matrix Matrix :: operator + (Matrix mat1)
{
    Matrix mat3 ;
    for (int i = 0 ; i<3 ; i++)
    {
        for (int j = 0 ; j<3 ; j++)
        {
            mat3.data[i][j] = data[i][j] + mat1.data[i][j] ;
        }
    }

    return mat3 ;
}

void Matrix :: operator - ()
{
    for (int i = 0 ; i< 3 ; i++ )
    {
        for (int j = 0 ; j<3 ; j++)
        {
            data[i][j] = - data[i][j] ;
        }
    }
}

void Matrix :: display()
{
    for (int i = 0 ; i< 3 ; i++)
    {
        for (int j = 0 ; j<3 ; j++)
        {
            cout << data[i][j] << " " ;
        }
        cout << endl ;
    }
}

Matrix Matrix :: transpose ( )
{
    Matrix mat2 ;
    for (int i = 0 ; i<3 ; i++)
    {
        for (int j = 0 ; j<3 ; j++)
        {
            mat2.data[i][j] = data[j][i] ;
        }
    }
    return mat2;
}

int main ()
{
    Matrix mat1 ;
    mat1.get_data()  ;
    Matrix mat2 ;
    mat2.get_data() ;
    cout << "\nMatrix 1 = "<< endl ;
    mat1.display() ;
    cout << "\nMatrix 2 = " << endl ;
    mat2.display() ;
    Matrix mat3 = mat1 + mat2 ;
    cout << "\nMatrix 3 = "<<endl ;
    mat3.display() ;
    -mat1 ;
    cout << "\nNegating elements of matrix 1 : " << endl ;
    mat1.display() ;
    Matrix mat4  = mat1.transpose();
    cout << "\nTranspose of matrix 1 :" << endl ;
    mat4.display() ;



    return 0 ;
}





