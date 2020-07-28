#include <iostream>
using namespace std ;
/* Let's start dealing with strings for now */

int main()
{
    string s = "Good Night "  ;
    cout << s <<endl ;
    cout << "size = " << s.size() << endl ;
    string g = "Love !!! " ;
    cout << g << endl ;
    cout << s+g << endl ;
    cout << s[3]   << endl ;     // indexing can be done for the string 
    char temp = s[0] ;   
    s[0] = g[0] ;
    g[0] = temp ;
    cout << s << " "<< g << endl  ;

    return 0 ;
}
