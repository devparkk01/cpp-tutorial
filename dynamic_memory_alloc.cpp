#include <iostream>
using namespace std ; 


int main ()
{
    int *p ; 
    int size ; 
    cout << "Enter size : " ; 
    cin >> size  ; 
    p = new int[size] ; 
    cout << "Enter array elements :" << endl ; 
    for (int i= 0 ; i <size ; i++)
    {
        cin >> p[i] ; 
    }
    for (int i = 0 ; i <size ; i++)
    {
        cout << p[i] << " "  ; 
    }

    int * ptr = new int(10) ; 
    cout << ptr << endl ; 
    cout << *ptr ; 
    delete p ; 
    cout << p ; 
    return 0 ; 
}