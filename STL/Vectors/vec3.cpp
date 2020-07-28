// Let's try to create a 2-d array using vector 

#include<iostream>
#include<vector>
#include <algorithm>

using namespace std; 

void print(vector<vector<int>> &mat ) 
{
    if (!mat.empty()) {
        for (int i = 0 ; i < mat.size() ; ++i ) 
        {
            for (int j = 0 ; j < mat[i].size() ; ++j ) 
            {
                cout << mat[i][j] << " " ; 
            }
            cout << endl ; 
        }
    }
}

bool compare (vector<int> & point_a , vector <int> &point_b ) 
{
    return point_a[1] < point_b[1] ; 
    // if this statement returs true then point_a will be placed before point_b , else the other  way  round  
}



int main() 
{
    vector <vector<int>> mat ;
    mat.push_back({2,3,5,6,4}) ;
    mat.push_back({4,6,3,6,4}) ; 
    print (mat) ; 
    cout << "current size and capacity : " << mat.size() << "," << mat.capacity() << endl ; 
    vector <int> v({4,5,6,4,2}) ;
    mat.push_back({3,45,3,5,3}) ; 
    mat.emplace_back(v) ;
    print(mat) ; 
    sort(mat.begin() , mat.end()) ; 
    cout << "Matrix after sorting : " << endl ; 
    print(mat) ; 
 // By default sorting goes in ascending order , follow these steps to sort in reverse order 
    sort (mat.begin()  , mat.end() , greater<vector<int>>() ) ; 
    cout << "sorting in reverse order : " << endl ; 
    print(mat) ; 
 
    // so , vector is a kinda dynamic array , follow these steps to sort static arrays 
    int arr[] = {3,5,6,3,2,6,2} ;
    sort (begin(arr) , end(arr) ) ; 
    cout << "Array after sorting : " << endl; 
    for (int i = 0 ; i < 7 ; ++i) {
        cout << arr[i] << " " ;
    }
    cout << endl ;
    
    // This is a built in sort , it actually is a hybrid of quicksort , heapsort and insertion sort , 0(n log n ) 
    
    // Now in reverse order 
    cout << "sorting in reverse order : " << endl ; 
    sort(begin(arr) , end(arr) , greater<int>() ) ;
    for (int i = 0 ; i < 7 ; ++i) {
        cout << arr[i] << " " ;
    }
    cout << endl ;

    // sorting using a comparison function 
    
    vector<vector<int>>  points ; 
    points.push_back({10,5})  ; 
    points.push_back({9,4})  ; 
    points.push_back({6,9}) ;
    cout << "Before sorting : " << endl ; 
    print(points) ;

    sort(points.begin() , points.end() , compare) ; 
    cout << "Post sorting : " << endl ; 
    print (points) ; 


    return 0 ; 

}