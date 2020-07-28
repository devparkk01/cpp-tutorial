#include <iostream>
#include<cstring>
using namespace std; 

int main()
{
    char * ptr[10] = {"books" , "sports" , "computers"} ; 
    char str[25] ; 
    cout << "Enter string : " << endl ; 
    cin >> str ; 
    for ( int i = 0 ; i<3 ; i++)
    {   
        if (!strcmp(str , ptr[i]) )
        {   
            cout << "string found " << endl ; 
            exit(0) ;
        }

    }
    cout << "String not found : " << endl ; 

    return 0 ; 

}