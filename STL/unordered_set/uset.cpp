#include<iostream>
#include<unordered_set> 
#define endl '\n'
#define us unordered_set<int>  
#define iter us :: iterator 

/*
No order is maintained . search , insert , delete avg case O(1) , worst case O(n)

*/

using namespace std ; 

void print(us &uset) {
    for (iter it = uset.begin() ; it != uset.end() ; ++it){
        cout << *it <<" " ; 
    }
    cout<< endl ; 
}

int main () {
    us uset ; 
    uset.insert(10 ) ;
    uset.insert(20) ;
    uset.emplace(22) ; 
    uset.insert(20) ;    // only one copy will be there
    uset.insert(6) ; 
    uset.insert(24) ; 

    print(uset) ; 

    //  finding if a key exists in the uset 
    iter it = uset.find(6) ; 
    if ( it != uset.end() ) {
        cout<< *it << " has been found : " << endl ; 
    }
    else 
        cout<< 6 << " has not been found : " << endl ; 

    //  erasing some values 
    uset.erase(20) ; 
    uset.erase(99) ;  // no problem if the key doesn't exist , won't throw any error   
    print(uset ) ; 

    //  size() function 

    cout << "Size : " << uset.size() << endl  ; 
    
    //  empty() function 
    
    us copySet ; 
    if (copySet.empty() ) {
        cout << "copySet is empty : " << endl ; 
    }
    else 
        cout << "copySet is not empty : " << endl ; 

    // copying unordered_set using "=" operator 
    copySet = uset ; 
    
    cout << "After copying  :  "  << endl;  
    if (copySet.empty()) {
        cout << "copySet is empty : " << endl; 
    }
    else {
        cout << "Size of copySet : " << copySet.size() << endl ; 
        print(copySet) ; 
    }


    

    return 0 ; 

}
