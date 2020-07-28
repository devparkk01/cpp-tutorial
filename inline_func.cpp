#include <iostream>
using namespace std ; 
class Circle 
{
    float radius ;
    public :
    void setRadius() ;
    void getArea() ; 
};

inline void Circle :: setRadius()
{
    cout <<  "Enter Radius of the circle :" ;
    cin >> radius ; 
}

void  Circle :: getArea()
{
    cout << "Area :" << 3.14 * radius * radius << endl ; 
}

int main ()
{
    Circle c1 ; 
    c1.setRadius() ;
    c1.getArea() ; 
    return 0 ; 
}