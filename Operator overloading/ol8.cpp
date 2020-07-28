// Overloading of ++ and -- operator 
#include <iostream>
using namespace std ; 

class complex 
{
    float real ; 
    float imag ; 

    public :
    complex() { }    // default constructor - doesn't have any parameter 
    complex(float real , float imag = 0 )       // parametrzed constructor 
    { this->real = real ; this->imag = imag ;  }
    void display() ;
    void operator ++ () ;  //   overloading ++ operator 
    void operator --() ; 
};

void complex :: display()
{
    cout << "complex no : " ; 
    cout << real<< "+i"<< imag << endl ; 
}
void complex :: operator++ ()
{
    real++ ; imag ++ ; 
}
void complex :: operator --()
{
    real -- ; imag -- ; 
}
int main ()
{
    complex  c1(3,4) ; 
    c1.display() ; 
    ++c1 ; 
    c1.display() ; 
    --c1 ; 
    c1.display() ; 
    

    return 0 ; 
}