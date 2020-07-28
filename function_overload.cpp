#include <iostream>
using namespace std ;
int area (int side)
{
    cout << "Area of the square : " ;
    return side * side ;
}
int area (float breadth , float length)
{
    cout << "Area of the rectangle : " ;
    return breadth  * length ;
}
float area (float radius)
{
    cout << "Area of the circle : " ;
    return 3.14 * radius  * radius ;
}
int main ()
{
    float rad = 10 ; 
    cout << area(10.0 , 3) << endl  ;
    cout << area(rad) << endl ;    
    cout << area(10)  << endl ;
    return 0 ;
}
