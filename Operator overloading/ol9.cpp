/* Operator overloading of [] subscript operator  */

#include <iostream>
using namespace std ; 

class Vector 
{
    int arr[5] ; 
    public :
    Vector ( int *p) ; 
    int operator [] (int k) ; 
} ; 

Vector :: Vector (int * p) 
{
    for ( int i = 0 ; i<5 ; i++)
    {
        arr[i] = p[i] ; 
    }
}

int Vector :: operator [] (int k )
{
    return arr[k] ; 
}


int main () 
{
    int p[] = {1,23,4,6,8} ; 
    Vector vec1(p) ; 
    cout << vec1[3] ; 

    return 0 ; 

}
