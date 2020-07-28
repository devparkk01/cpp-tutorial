#include <iostream>
using namespace std; 

template <class T >
void Swap ( T & var1 , T & var2 )
{
    T temp = var1 ; 
    var1 = var2 ; 
    var2 = temp ; 
}
template <class T >
void bubble_sort (T arr[] , int size)
{
    for ( int i = 0 ; i < size -1   ; i++)
    {
        for ( int j = 0  ; j <  size -1-i ; j++ )
        {
            if (arr[j] > arr[j+1])
            {   
                swap(arr[j] , arr[j+1]) ; 
            }
        }
    }
}


int main()
{
    int arr[]  = {4,6,2,5,7,43,4,6,4,3 } ; 
    bubble_sort(arr , 11); 
    for ( int i  = 0 ; i< 10 ; i++)
    {
        cout << arr[i] << " " ; 
    }

    return 0 ; 
}