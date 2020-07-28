#include <iostream>
#include <string>
using namespace std ; 

class classB ; 
class classA 
{
    int a ; 
    public :
    classA(int a )
    { this ->a = a ; }
    friend void operator > (classA obj1 , classB obj2) ; 
};

class classB 
{
    int b ; 
    public :
    classB (int b)
    {
        this ->b= b ; 
    }
    friend void operator > (classA obj1 , classB obj2);
} ; 

void operator > (classA obj1 , classB obj2)
{
    string res ; 
    if (obj1.a > obj2.b)
    {
        res = "class A has greater value :" ; 
    }
    else
    {
        res = "class B has greater value : " ; 
    }

    cout << res ; 
    
}


int main ()
{
    classA obj1(565) ; 
    classB obj2(543) ; 
    obj1 > obj2 ; 

    return 0 ;
}


