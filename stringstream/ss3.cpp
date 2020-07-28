#include<iostream>
#include<vector>
#include<sstream>
#define endl '\n'
#define v vector<int> 

using namespace std ; 

/* 
converting string to numbers 
*/
void print(v &vec) {
    for (int i = 0 ; i < vec.size() ; ++i) {
        cout<< vec[i] << " " ; 
    }
    cout << endl;  
}

int main () {
    cout << "Enter the array of numbers  : " << endl; 
    string str ;   stringstream ss ; v vec ; 
    getline(cin ,str  ) ;
    ss << str   ;       // writing to the stringstream 
    int x ; 
    while ( ss >> x ) {
        vec.push_back(x) ; 
    }
    cout << "Printing the vector : " << endl ; 
    print(vec) ; 

}