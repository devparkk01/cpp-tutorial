#include<iostream>
#include<sstream>
#define endl '\n'

using namespace std ; 

int main() {

    string str ; 
    string  word ; 
    getline(cin , str) ; 
    stringstream ss(str) ;
    while (ss >> word ){    // reading from the stringstream
        cout << word << endl ; 
    }
    cout << ss.str() << endl ; // returns the full string from ss 

    return 0 ; 

}