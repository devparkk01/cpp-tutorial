#include <iostream>
using namespace std;
/* let's see the application of  virtual base class */

class A
{
    public : int i ; 
} ; 

class B : virtual public A 
{
    public : int j ;
} ; 

class C : virtual public A
{
    public : int k ;
} ; 

class D : public B , public C 
{
    public : int l ; 
} ; 

int main ()
{
    D obj ; 
    obj.i = 2 ; 
    obj.j = 3 ; 
    obj.k = 5 ; 
    obj.l = 6 ; 
    cout << obj.i << endl ;
    cout << obj.j << endl ; 
    cout << obj.k << endl ;
    cout << obj.l << endl ; 

    return 0 ;    


}