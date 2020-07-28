#include <iostream>
// using namespace std ;

/* base class constructor is invoked first followed by derived class constructor  */

class Base 
{
    int x ;
    public:
    Base()
    {
        std :: cout << "Base class constructor invoked :" << std :: endl ; 
    }
};

class Derived : public Base 
{
    int y ;
    public :
    Derived ()
    {
        std :: cout << "Derived class constructor invoked :" << std :: endl ; 
    }
};


int main ()
{
    Base b1 ; 
    Derived d1  ; 

    return 0 ; 
}