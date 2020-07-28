#include<iostream>
#include<vector>

using namespace std  ; 

int main () 
{
    vector <int> vec_int  ;
    // cout << vec_int.size() ;
    // cout << vec_int.capacity() ; 
    for ( int i = 0; i< 10 ; i++)
    {
        vec_int.push_back(i) ; 
    }
    // cout << vec_int.size() << endl ; 
    // cout << vec_int.capacity() ; 
    
    vector <int> :: iterator itr ; 
    vec_int.clear() ; 
    vector <int> vec_int2 (5) ; 
    // for ( itr = vec_int2.begin() ; itr!= vec_int2.end() ; itr++)
    // {
    //     vec_int2.insert(itr , 6) ; 
    // }

    for (int i =0 ; i<vec_int2.size() ; i++)
    {
        vec_int2[i]  = i ; 
    }
    vec_int2.erase(vec_int2.begin() +1 , vec_int2.begin()+3) ; 

    for (int i = 0 ; i< vec_int2.size() ; i++)
    {
        cout << vec_int2[i] << endl ; 
    }
    cout << vec_int2.size() << endl  ; 


    return 0 ;
}