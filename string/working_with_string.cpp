#include<iostream>
#include <string>
using namespace std ; 

int main ()
{
    string s1 ; 
    cout << "Enter Your name :" ; 
    getline(cin , s1)  ; 
    string s2 ; 
    cout << "Enter your college name :" ; 
    getline(cin , s2) ; 
    cout << s1 << endl  ; 
    cout << s2 ; 

    return 0 ;
}