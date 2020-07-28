#include<iostream>
using namespace std ;

class vector 
{
    int  a[5] ;

    public :
    vector (int *arr) ;
    vector () 
    {  }
//   void get_data () ;
//   void display () ; 
    friend vector operator * (int a , vector b) ; 
    friend vector operator * (vector b , int a) ; 
    friend istream & operator >> (istream & in , vector&vec1) ; 
    friend ostream & operator << (ostream & out , vector & vec2) ; 

};

vector :: vector(int * arr) 
{
    for (int i= 0 ; i<5 ; i++)
    {
        a[i] = arr[i] ; 
    }
}

vector operator * (int a , vector b) 
{
    vector vec2 ; 
    for (int i = 0 ; i< 5; i++)
    {
        vec2.a[i] = b.a[i] * a ; 
    }
    return vec2 ; 
}

vector operator * (vector b , int a)
{
    vector vec2 ; 
    for (int i= 0 ; i<5 ; i++)
    {
        vec2.a[i] = b.a[i] * a ;  
    }
    return vec2 ; 
}

istream & operator >> (istream &in , vector &vec1)
{
    cout << "Enter data of the vector(5 values)  : " << endl ;
    for (int i =0 ; i < 5; i++)
    {
        in >> vec1.a[i] ; 
    }
    return in ; 
}

ostream & operator << (ostream &out , vector &vec2)
{
    for (int i= 0 ; i<5 ; i++)
    {
        out << vec2.a[i] << " " ; 
    }
    out << endl ; 
    return out ;
}


int main()
{
    vector vec1 , vec2 ; int a ;
    cin >> vec1 ; 
    cout << "Matrix is :" ; 
    cout << vec1 ; 
    cout <<"Enter the scalar value to be multiplied with :" ;
    cin >> a; 
    vec2 = a * vec1 ;  
    cout << "Multiplication by "<< a <<" : " << endl ; 
    cout << vec2 ; 
    cout <<"Enter the scalar value to be multiplied with :" ;
    cin >> a; 
    vec2 = vec1 * a ;  
    cout << "Multiplication by "<< a << endl ; 
    cout << vec2 ; 
   



    return 0 ; 
}


