#include<iostream>
#include<vector>

using namespace std ;

void info (vector  <int> &arr) {
    cout << "Size : " << arr.size() << ", capacity : " << arr.capacity() << endl ; 
}

void print(vector <int> &arr){
    if (!arr.empty()) {
        for (int i = 0 ; i < arr.size() ; ++i) {
            cout << arr[i]  << " "; 
        }
        cout << endl ; 
    }
}

int main() 
{
    // case 1 
    // vector<int> arr ;    // size = 0 , capacity = 0 

    // case 2
    vector <int> arr(3) ; // size = 3 , capacity = 3  ,arr = 0,0,0 
    info(arr) ; 
    print(arr) ; 

    // case 3 
    vector <int> arr_2(3 , 4) ;   // size = 3 , capacity = 3 , arr_2 = 4,4,4 
    info(arr_2) ; 
    print(arr_2) ;

    // case 4
    // Directly initializing the vector from an array 
    vector <int> arr_3 ({1,3,5,3}) ; // size = 4 , capacity = 4 , arr_3 = 1 ,3 , 5, 3 
    info(arr_3) ; 
    print(arr_3) ; 

    // case 5 
    // This is the most interesting way of initializing the vector
    vector <int> arr_4 ;    // size = 0 , capacity = 0
    info(arr_4); 
    arr_4.reserve(3) ;      // size = 0 , capacity = 3 
    info( arr_4) ;
    print(arr_4) ; 

    // This method reserves 3 cont. memory locations for this vector , but do not initializes the vector with any value 
    // so vector might be populated with random values 
    // therefore size is still 0 while capacity became 3 
    // so we can easily push items into this by calling push_back function 
    // but so is not the case with case 2 , because the vector is already populated with 0's and calling push_back() 
    // will not add items from the index 0 ,rather it will add items in the end,increasing the size as well as capacity
    
    arr_4.push_back(3) ;
    arr_4.push_back(9) ;   // Size : 2, capacity : 3   arr_4 = 3 ,9
    info(arr_4) ;
    // print(arr_4) ; 
    //  Another way of printing the array using the advanced for loop 

    for (int i : arr_4) 
        cout<< i << " " ; 
    cout << endl ; 
        



    arr_4.resize(10) ; // Size : 10, capacity : 10 arr_4 = 3 ,9 ,0 ,0 ,0 ,0 ,0 , 0 ,0 ,0
    info(arr_4) ;
    print(arr_4) ; 
    // so , resize function initialized all other indexes to 0 , this is bad 
    

    return 0 ; 
}