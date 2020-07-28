#include<iostream>
using namespace std ; 

void division (int x , int y)
{
    if ( y != 0 )
    {   cout << "Division : " << x/y << endl ; }
    else 
    {
        throw (y) ; 
    }
}
int main()
{
    int x = 8 ; int y = 0 ;
    try 
    {
        division(x, y) ; 
    }
    catch(int x)
    {
        cout << "Error : Division by zero " << endl ; 
    }
    cout << "end " << endl ;

    return 0 ; 
}