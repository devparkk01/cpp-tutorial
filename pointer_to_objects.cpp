#include<iostream>

class item
{
    int code ; 
    float price ; 
    public :
    void get_data(int code , float price) ; 
    void display() ; 
};

void item :: get_data( int code , float price)
{
    this->code = code ; 
    this->price = price ; 
}
void item:: display()
{
    std :: cout << "Code :" << code << std:: endl ; 
    std:: cout << "Price :" << price << std :: endl  ;
}

int main()
{
    item obj ; 
    item * p ; 
    p = &obj ; 
    p->get_data(24  , 56.4) ; 
    p->display() ;

    return 0 ; 
}