#include <iostream>
#include <vector>

using namespace std ;


int main() 
{
    vector <int > arr  ;
    cout << "Initial size  and capacity of the vec :"   << arr.size() << ","  << arr.capacity() << endl ; // 0 , 0 

    arr.reserve(3) ; 
    cout << "New size and capacity : " << arr.size() << "," << arr.capacity() << endl ;  // 0, 3 
    arr.push_back(4) ; 
    arr.push_back(2) ; 
    cout << "New size and capacity : " << arr.size() << "," << arr.capacity() << endl ;  // 2, 3 
    arr.push_back(7) ; 
    arr.push_back(232) ; 
    cout << "New size and capacity : " << arr.size() << "," << arr.capacity() << endl ;   // 4,6 
    arr.shrink_to_fit() ;
    cout << "Size and capacity after shrinking to fit : " << arr.size() << "," <<  arr.capacity() << endl ; // 4,4  size and capacity becomes equal 

 // let's resize this array 
    arr.resize(10) ;   // arr contains 4, 2, 7 , 232 , 0 , 0 , 0 , 0 , 0 , 0 
    cout << arr[5] ;
    
    return 0 ; 

}