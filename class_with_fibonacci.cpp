
#include <iostream >
using namespace std ;

class fib_seq
{
    int n ;

    public :
    void input() ;
    int fibonacci()  ;
    int * fibonacci_seq() ;
    void display_seq () ; 

};

void fib_seq :: input()
{
    cout << "Enter num value : " ;
    cin >> n ;
    cout << "\n" ;
}

int fib_seq :: fibonacci( )
{
    int * point = fibonacci_seq() ; 
    return point[n-1] ; 
}

int *  fib_seq :: fibonacci_seq( )
{
    int * arr = new int[n] ; 
    int i ;

    if (n == 1 )
    {
        arr[0] = 1 ;
    }
    else if (n == 2)
    {
        arr[0] = 1 ;
        arr[1] = 1 ;
    }
    else
    {
        arr[0] = 1 ; arr[1] = 1 ;
        for (i = 2 ; i< n ; i++)
        {
                arr[i] = arr[i-1] + arr[i-2] ;
        }
    }

    return arr ;

}

void fib_seq :: display_seq()
{
    cout << "{ " ;
    int * arr = fibonacci_seq() ; 
    for (int i = 0  ; i < n ; i++)
    {
        cout << arr[i] << " " ; 
    }
    cout << "}" ; 
}

int main ()
{
    fib_seq num_1 ;
    num_1.input() ;
    int value = num_1.fibonacci() ;
    cout <<"fibonacci value = " << value << endl ;
    num_1.display_seq()  ; 


   return 0 ;
}
