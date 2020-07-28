#include <iostream>
using namespace std ; 

class Test 
{
    static int x ; 
    public :
    void test1 () {  x++ ; }
    static int getX () { return x ; }
};

int Test :: x = 10  ;

int main ()
{
    cout << Test::getX() << endl ;
    Test t[5] ; 
    for ( int i = 0 ; i<5 ; i++)
    {
        t[i].test1() ;
        cout << Test::getX() << endl ; 
    }

    return 0 ; 
}