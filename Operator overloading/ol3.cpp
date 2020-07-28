#include <iostream>
using namespace std ;


class Distance
{
    int feet ;
    int inch ;

    public :
    Distance ()  
    {  feet = 0 ; inch = 0 ; }
    friend void operator >> (istream &in , Distance &dis1) ;
    friend void operator << (ostream &out , Distance &dis1 ) ;

};


void operator >> (istream &in , Distance &dis1)
{
    cout << "Enter feet Distance : " ;
    in >> dis1.feet ;
    cout << "Enter inch Distance : " ;
    in >> dis1.inch ;

}

void operator << (ostream &out , Distance &dis1 )
{
    out << "feet Distance = " << dis1.feet <<  "\t" << "Inch Distance = " << dis1.inch << endl ;
}


int main ()
{
    Distance dis1 ;
    cout << dis1 ;
    cin >> dis1 ;
    cout << dis1 ;


    return 0 ;
}
