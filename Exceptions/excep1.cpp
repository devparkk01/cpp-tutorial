#include <iostream>
#include<string>
using namespace std ; 

int main()
{
    cout << "Enter a word of length 10 :" ; 
    string stt1 ;
    getline(cin , stt1) ; 
    try 
    {
        cout << "inside try block :" << endl ; 
        if (stt1.length() < 10)
        {
            unsigned diff = 10 - stt1.length() ; 
            throw (diff) ;
        }
        else if (stt1.length() > 10)
        {
            int neg_len = 10 - stt1.length() ; 
            throw(neg_len)  ; 
        }
        else 
        {   cout << "Alright !  " << "word length " << stt1.length() << endl ;  }

        cout << "Out from the try block, No exception raised :" << endl ; 
    }
    catch ( unsigned x)
    {
        cout << "That's not a word of length 10 :" << endl ; 
        cout << "You're short by " << x << " letters" << endl ; 
    }

    catch (int  x)
    {
        cout << "That's more than 10 :" << endl ; 
        cout << "string overflown by " << -x << " letters :" << endl ; 
    }


    cout << "Quitting " << endl ;  // always gets executed 
    unsigned value = -10 ; 
    cout << "value = " << value ; 
    return 0 ; 

}