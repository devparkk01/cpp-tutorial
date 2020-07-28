#include <iostream>
using namespace std; 

class p 
{
    public :
    int i ; 
};

class q : virtual public p
{
    public :
    int j ; 
};

class r : virtual public p 
{
    public:
    int k ;
};

class s :  public q , public r 
{
    public:
    int mul ; 
};

int main ()
{
    s ob1 ; 
    ob1.i = 10 ; 
    ob1.j = 20 ;
    ob1.k = 30 ; 

    ob1.mul = ob1.i + ob1.j + ob1.k ; 
    cout <<  ob1.mul << endl ; 

    return 0 ; 
}