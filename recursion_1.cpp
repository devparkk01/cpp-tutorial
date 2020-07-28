#include <iostream >
#include <math.h>
using namespace std ;
// write an iterative program to compute x^n
// using recursion

float pol_rec (int x , int n )
{
   if (n == 0)
   { return 1 ; }
   else if (n < 0 )
   {
        //n = n * (-1) ;
       return   1 / pol_rec( x , -n ) ;
   }
   else
   {
       return x * pol_rec(x , n-1) ;
   }
}

// using iterable
float pol_iter (int x, int n )
{
    int i = 0 ; float value = 1 ;
    if (n < 0)
    {
        for (i ; i < -n ; i++ )
        {
        value *= x ;
        }
        return (1 / value ) ;
    }
    else
    {
    for (i ; i < n ; i++ )
    {
        value *= x ;
    }
    return value ;
    }
}

int main ()
{
    int x , n ;
    cout  <<"Enter x and n :\n"  ;
    cin >>  x  >> n ;
    cout << pol_iter(x , n ) ;
    return 0 ;
}

