// here , we'll see what is the order of constructor invoking in case of multiple inheritance

#include<iostream>

class Base_a
{
    int x ;
    public :
    Base_a(int a)
    {
        x = a ; 
        std :: cout << "Inside Base_a :" << std :: endl ; 
        std :: cout << "x = " << x << std:: endl ; 
    }
}; 

class Base_b
{
    int y ; 
    public :
    Base_b(int b)
    {
        y = b; 
        std :: cout << "Inside Base_b :" << std :: endl ; 
        std :: cout << "y = " << y << std :: endl ; 
    }
};

class Base_c 
{
    int z ; 
    public:
    Base_c(int c)
    {
        z = c ; 
        std :: cout << "Inside Base_c :" << std :: endl; 
        std :: cout << "z = " << z << std :: endl  ;
    }
};

class Derived : public Base_c ,public Base_a , public Base_b
{
    int m ;
    public:
    Derived ( int a , int b, int c, int d) : Base_c(a) , Base_a(b) , Base_b(c) 
    {
        m = d ; 
        std :: cout << "Inside Derived :" << std ::endl ; 
        std :: cout << "m = " << m << std :: endl ;
    }
}; 

int main()
{
    Derived D1(1,2,3,4) ;
    
    return 0 ;
    
}