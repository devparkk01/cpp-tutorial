#include<iostream>
using namespace std ; 

int area (int length , int width = 1)
{
    return length * width ; 
}

inline int add (int num1 , int num2 = 0)
{
    return num1 + num2 ; 
}

int main ()
{
    cout << area(4) << endl ; 
    cout << add(3) ; 
    return 0  ;
}