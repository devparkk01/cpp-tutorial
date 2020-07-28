#include<iostream>
#include <cstdlib> 
/* cstdlib header file has abs() , labs() , llabs() functions which return absolute values of integers , long integers , long long integers respectively */ 
/* operator overloading is a mechanism of giving special meaning to operators */

using namespace std ; 

class complex 
{
    int real ;
    int imag ;


    public:
    void get_data (int real , int imag) ;                           // class member functions
    void display () ;                                               // class member functions
    friend complex operator + (complex comp1 , complex comp2 ) ;    // friend functions
    friend complex operator - (complex comp1 , complex comp2) ;    // friend functions
    complex operator - () ;                               // overloading of unary operator 
    complex operator * (complex comp2) ;                            // class member functions
    void operator == (complex comp2) ;                              // class member functions 
 

} ;
void complex :: get_data(int real , int imag)
{
    this->real = real ; 
    this->imag = imag ; 
}

void complex :: display () 
{
    char sym = (imag > 0) ? '+' : '-' ; 
    cout << real << sym << abs(imag) << "i" << endl ; 
}

// No need of scope resolution operator for friend functions

complex operator + (complex comp1 , complex comp2)
{
    complex comp3 ; 
    comp3.real = comp1.real + comp2.real ; 
    comp3.imag = comp1.imag + comp2.imag ; 

    return comp3 ; 
}

complex operator - (complex comp1 , complex comp2)
{
    complex comp3  ;
    comp3.real = comp1.real - comp2.real ;
    comp3.imag = comp1.imag - comp2.imag ; 
    return comp3 ; 
}

complex complex :: operator -()
{
    complex comp1 ; 
    comp1.real = -real ; 
    comp1.imag = -imag ; 

    return comp1 ; 

}

complex complex :: operator * (complex comp2)
{
    complex comp3 ; 
    comp3.real = real * comp2.real ;
    comp3.imag = imag * comp2.imag ; 
    return comp3 ; 
}


void complex :: operator == (complex comp2)
{
    if (real == comp2.real  && imag == comp2.real )
    {
        cout << "Equal " << endl ; 
        return ; 
    }
    cout << "Unequal :" <<endl ; 
}


int main ()
{
    complex comp1 , comp2 , comp3 ; 
    int real , imag ; 
    cout << "Enter real part of comp1 : " ;
    cin >> real ;
    cout << "Enter imag part of comp1 : " ;
    cin >> imag ; 
    comp1.get_data(real , imag) ; 
    cout << "Enter real part of comp2 : " ;
    cin >> real ;
    cout << "Enter imag part of comp2 : " ;
    cin >> imag ; 
    comp2.get_data(real , imag ) ;
    comp3 = comp1 + comp2 ; 
    cout << "Addition of these complex nos : " ; 
    comp3.display() ; 
    comp3  = comp1 - comp2 ; 
    cout << "Subtraction of these complex nos : "  ; 
    comp3.display() ;
    comp3 = comp1 * comp2 ; 
    cout << "Multiplication of these comples nos : "  ; 
    comp3.display() ; 
    comp1 == comp2 ; 
    complex comp4 = -comp1 ; 
    comp4.display() ; 

    return 0 ;     
    
}




