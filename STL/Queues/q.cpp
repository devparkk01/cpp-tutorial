#include<iostream>
#include<queue>

using namespace std ; 

void print(queue<int> &q) 
{
    auto temp_q = q ;
    while (!temp_q.empty()) 
    {
        cout << temp_q.front() << " " ;
        temp_q.pop() ; 
    }
    cout << endl ; 
}

int main ()
{
    queue<int> q ; 
    cout << q.size() << endl ; 
    q.push(4) ; 
    q.push(6) ;
    cout << q.front()  << endl ; 
    cout << q.size() << endl ; 
    q.emplace(45) ;
    cout << q.size() << endl ; 
    q.pop() ; // pop() doesn't return any data . it simply deletes the first element from the queue . 
    cout << q.front() << endl ; 
    // it does not have iterator and it can't be subscripted 
    print(q) ; 
    cout << "Last element : " << q.back() << endl ; 


    return 0 ; 
}