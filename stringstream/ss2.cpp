#include<iostream>
#include<sstream>
#define endl '\n'

using namespace std ; 

int main() {
    stringstream ss ;
    string name , location ; 
    cout <<"Enter your name : " << endl; 
    getline(cin , name ) ; 
    cout << "Enter your location : " << endl ; 
    getline(cin , location ) ;

    ss << "Name : " << name << " , location : " << location << endl ;  // writing to the stringstream

    string sentence = ss.str() ; // returns the full string from the stringstream 
    cout << sentence << endl ; 

    return 0 ; 
}