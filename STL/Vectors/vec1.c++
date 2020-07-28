#include<iostream>
#include<vector>
using namespace std ; 

template<class T> 
void print (vector <T> arr) 
{
    if (!arr.empty() ) {
        for (int i = 0 ; i < arr.size() ; ++i ) 
        {
            cout << arr[i]   ; 
            cout << "  " ; 
        }
        cout << endl ; 
    }
}

class Complex 
{
    public : 
    double x ;
    double y ;
    Complex (double x  , double y )  
    {   this->x  = x ; this->y = y ;   }

    friend void operator << (ostream &out , Complex &obj) 
    {
        out << obj.x << "," << obj.y  ; 
    }
} ;



int main ()
{
    cout << "Vec_1 : " << endl << endl ; 
    vector <int> vec_1(4 , 3) ; 
    print(vec_1) ;     // 3 3 3 3
    cout << "Initial capacity : " << vec_1.capacity() << endl ; 
    vec_1.push_back(5) ;
    cout << "Capacity after inserting 1 element : " << vec_1.capacity() << endl ; 
    vec_1.push_back(78) ; 
    print(vec_1) ;   //  3 3 3 3 5 78
    vec_1.pop_back() ; 
    print(vec_1) ; 
    cout << vec_1.capacity()  << endl ; 
    auto front = vec_1.front() ;
    auto back = vec_1.back() ;
    cout << front << " "  << back  << endl ; 

    vector<int> :: iterator itr = vec_1.begin() ; 
    cout << *itr << endl ; 
    itr++ ; 
    cout << *itr ;

    cout << endl << "Vec 2 : " << endl << endl ; 
    vector <int> vec_2 {1,2,4,6,4,2,7,3} ; 
    cout << "Size : " << vec_2.size() << " capacity : " << vec_2.capacity() << endl ; 
    print(vec_2) ; 
    vec_2.push_back(3) ;
    vec_2.push_back(23)  ;
    cout << "After adding two elements : " << "Size : " << vec_2.size() << " capacity : " << vec_2.capacity() << endl ; 
    auto iter = vec_2.begin() + 2 ; 
    cout << "Element at 3 : " << *iter << endl; 

    cout << "vec_3 :" << endl << endl ; 
    vector<Complex> vec_3 ; 
    Complex comp = Complex(3 , 3.34) ; 
    vec_3.push_back(comp) ; 
    print(vec_3) ;
    vec_3.emplace_back(5,7.5) ; 
    print(vec_3) ;
    vec_3.emplace_back(6,5.4) ;
    print(vec_3) ; 
    vec_3.emplace(vec_3.begin() , 1,1) ;
    print(vec_3) ; 
    vec_3.emplace(vec_3.begin() + 1 ,  1 , 1.2)  ;
    print(vec_3) ; 

    

    return 0 ; 

} 