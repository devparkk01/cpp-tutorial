#include <iostream>
using namespace std ; 
int main()
{
    int * ptr = new int [10] ; 
    cout << "Enter 10 elements : " << endl ; 
    int k ; 
    cin >> k ; 
    for ( int i = 0; i < k ; i++)
    {   cin >> ptr[i] ;  }
    for ( int i = 0 ; i<k ; i++)
    {   cout << ptr[i] << endl ; }


    return 0 ; 
}