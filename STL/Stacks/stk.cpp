#include<iostream>
#include<stack>

using namespace std ; 

int main()
{
    stack <double> stk ; 
    cout << "Initial size : " << stk.size() << endl ; 
    stk.push(3.3) ;
    stk.emplace(2) ;
    cout << "Top element : " << stk.top() << endl ; 
    stk.pop() ;
    cout << "Top element : " << stk.top() << endl; 
    stk.pop() ;
    cout <<"size of the stack : " << stk.size() << endl ;

    if (stk.empty() ) cout << "Stack is empty : " << endl ; 
    else cout << "Stack is not empty : " << endl ; 


    return 0 ; 
}