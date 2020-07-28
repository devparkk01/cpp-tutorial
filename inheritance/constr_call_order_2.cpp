//  let's see what happens when the base class contains a parametrized constructor  

#include <iostream>

class Base 
{
    int x ;
    public:
    Base ( int a)
    {
        x = a ; 
        std :: cout << "Inside the base class :" << std :: endl ; 
        std :: cout << "x = " << x << std :: endl ;
    }
};

class Derived  : public Base 
{
    int y ; 
    public :
    Derived (int b ) : Base(b)        // b  is passed to the constructor of the base class , so x = b 
    {
        y = b ;
        std :: cout << "Inside the derived class : " << std :: endl ;
        std :: cout << "y = " << y << std :: endl ; 
    }
};

int main()
{
    Derived d1 (5) ; 

    return 0 ; 
}