#include<iostream>
#include<cstring>
using namespace std ;
// use of dynamic constructor
class String
{
    char * name ;
    int length ;

    public:
    String () { length = 0 ;}          // default constructor
    String (char * str ) ;             // dynamic constructor
    String (String &s1) ;              // Copy constructor
    void display() ;
    void join(String s1 , String s2) ;

};

String :: String (char * str)
{
    length = strlen(str) ;
    name = new char[length + 1] ;
    strcpy(name , str) ;

}
void String :: display()
{
    cout << "Name = " << name << endl ;
}
void String :: join(String s1 , String s2)
{
    delete (name) ;
    length = s1.length + s2.length ;
    name = new char[length + 1] ;
    strcpy(name , s1.name ) ;
    strcat(name , s2.name ) ;
}

String :: String (String &s1)
{
    length = strlen(s1.name) ;
    name = new char[length + 1] ;
    strcpy(name , s1.name)  ;

}

int main()
{
    String S1 ("Dev" ), S2 ("Prakash"), S3("Bala") , S4 ;
    S1.display() ;
    S2.display() ;
    S3.display() ;
    S4.join(S1 , S2) ;
    S4.display()  ;
    String S5(S3) ;   // Copy constructor called
    S5.display();
    S5.join(S3 , S2) ;
    S5.display() ;

    return 0 ;


}
