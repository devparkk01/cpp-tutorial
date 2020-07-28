#include<iostream>

class Base_A
{
    public:
    void display()
    {
        std :: cout << "Base_A class " << std :: endl ; 
    }
};

class Derived_A : public Base_A 
{
    public :
    void display()
    {
        std:: cout << "Derived_A class " << std :: endl ; 
    }
};

int main()
{
    Base_A obj1 ; Derived_A obj2 ; 
    obj1.display() ; 
    obj2.display() ;  // overrides the display method of the base class
    obj2.Base_A::display() ;   // invokes display method of the base class 
    

    return 0 ; 
}