// write a program to swap private member variables of two classes

#include <iostream>
using namespace std ;

class Orange ; 
class Apple 
{
    float weight ;
    public :
    void get_data(float wt) ; 
    void show_data() ; 
    friend void swap(Apple &obj1 , Orange &obj2) ; 
};

class Orange 
{
    float weight ; 
    public:
    void get_data(float wt) ;
    void show_data() ;
    friend void swap(Apple &obj1 , Orange &obj2) ; 
};

void Apple :: get_data(float wt)
{
    weight = wt ; 
}
void Apple :: show_data()
{
    cout << "Weight of given apple :" << weight  << endl ; 
}

void Orange:: get_data(float wt)
{  
    weight = wt ; 
}
void Orange :: show_data() 
{
    cout << "Weight of given orange :" << weight << endl ; 
}

void swap (Apple &obj1 , Orange &obj2)
{
    float temp  = obj1.weight ; 
    obj1.weight = obj2.weight ; 
    obj2.weight = temp ; 
}

int main () 
{
    Apple apl1 ; Orange org1 ; 
    apl1.get_data(30.5) ; org1.get_data(26.4) ;
    apl1.show_data() ; org1.show_data() ; 
    swap(apl1 , org1); 
    cout << "After swapping : " << endl  ;
    apl1.show_data() ; org1.show_data() ; 

    return 0 ; 
}