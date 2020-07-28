#include<iostream>
#include<unordered_map>
#define endl '\n'

// avg search , insert , delete O(1)  , worst search , insert , delete O(n) 


using namespace std ; 


void print(unordered_map<string , double > &umap ) { 
    for (auto itr = umap.begin() ; itr != umap.end() ; ++itr) {
        cout << itr->first << " :  " << itr->second << endl ; 
    }
}


int main() {
    unordered_map<string , double > umap ; 

    // inserting using [] operator  

    umap["PI"] = 3.14 ; 
    umap["root2"] = 1.414 ; 
    umap["root3"] = 1.732 ; 
    umap["root4"] = 2.000 ; 

    // inserting using insert() operator 

    umap.insert({"log2" , 0.3010}) ; 
    umap.insert({"log3" , 0.4771}) ; 


    //  inserting using insert() and make_pair() 

    umap.insert(make_pair("log4" , 0.6020 )) ; 

    //  using emplace() to insert 
    umap.emplace("log6" , 0.7781 ) ; 

    print(umap) ; 
    cout << endl << endl ; 

    auto itr = umap.find("log4") ; 
    if (itr == umap.end()) {
        cout << "log4 is not found "  << endl ; 
    }
    else {
        cout << "Found " << endl ; 
        cout << itr->first << " : " << itr->second << endl ; 
    }


    cout<< "size : " << umap.size()  << endl << endl  ;  



    //  erasing  log4 ;  
    umap.erase("log4") ; 
    //  modifying  the value of log6 
    umap["log6"] = 0.77 ;   

    // another way of doing the above operation is as follow : 
    itr = umap.find("log3") ;  // returns an iterator pointing to log3 
    itr->second = 0.47 ; 
    print(umap)  ;






    return 0 ; 


}