// single inheritance 
#include <iostream>
#include <string>
using namespace std ; 
class B
{
    int a ; 
    public :
    int b ;
    void set_ab() ; 
    int get_a() ;
    void show_a() ;

};

class D : public B
{
    int c ;
    public :
    void mul() ;
    void display() ; 

};

void B :: set_ab()
{
    a = 10 ; b = 5 ; 
}

int B :: get_a ()
{
    return a ;
}

void B :: show_a()
{
    cout << a ; 
}

void D :: mul()
{
    c = b * get_a() ; 
}

void D :: display()
{
    cout << "b = " << b ; 
    cout << "c = " << c ; 

}

int main()
{
    D d ;
    d.set_ab() ;
    d.mul() ;
    d.show_a() ; 
    d.b = 20 ; 
    d.mul() ; 
    d.display() ; 


    return 0 ; 

}
