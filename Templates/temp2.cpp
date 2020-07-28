#include <iostream>
using namespace std  ;

template <class T = int >
class vector
{
    T * arr ; unsigned size ; 
    public :
    vector(unsigned size) ;
    void get_data() ; 
    void show () ; 
    T max() ; 
    T min () ; 
    void bubble_sort() ; 
};
template<class T>
vector<T> :: vector (unsigned size)
{
    this->size = size ;
    arr = new T[size] ; 
}
template<class T>
void vector<T> :: get_data()
{
    cout << "Enter " << size << " values:" << endl ; 
    for ( int i = 0 ; i< size ; i++)
    {   cin >> arr[i]  ;  }
}

template<class T >
void vector <T> :: show()
{
    cout << "showing entries : " << endl ; 
    for ( int i = 0  ; i < size ; i++)
    {   cout << arr[i]  << endl ; }
}

template<class T>
T vector<T> :: max()
{
    T value = arr[0] ; 
    for ( int i = 1 ; i < size ; i++)
    {  
        if (value < arr[i])  
        {   value = arr[i]  ;   }
    }
    return value ; 
}


int main ()
{
    vector < > int_vec(10) ; 
    int_vec.get_data() ; 
    int_vec.show() ;
    cout << int_vec.max() ;
    return 0 ;
}
