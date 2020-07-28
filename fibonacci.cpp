#include <iostream >
using namespace std ;

int fibonacci (int  n )
{
    if (n==1 || n==2 )
    {return 1 ; }
    else 
    {
        return fibonacci(n-1) + fibonacci(n-2) ; 
    }
}

void fibonacci_seq(int n)
{
    int arr[n] ;
    for ( int i = 1 ; i < n+1 ; i++)
    {
        arr[i-1] = fibonacci(i) ;    /* i correspondes to the ith element of the fibonacci seq ,which is ith element(i-1 index) of arr */
    }
    printf ("[") ; 
    for ( int i= 0 ; i < n ; i++)
    {
        printf ("%d ", arr[i]) ;
    }
    printf("]\n") ;
}


int main ()
{
    int num ;
     cout << "Enter a num : " ;
     cin >>  num ;
     cout << "Nth fibonacci sequence = " << fibonacci(num) ;
     cout << "\n" ;
     fibonacci_seq(num) ;

   return 0 ;
}
