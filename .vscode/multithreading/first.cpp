#include <iostream>
#include <thread>

using namespace std ; 


void fun(int a ){
    while(a > 0) {
        cout << a << " " ;
        a-- ; 
    }
}

int main() {

    thread t1(fun , 10) ;
    t1.join() ; 

    return 0 ;
}