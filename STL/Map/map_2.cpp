#include<iostream>
#include<map> 


/*  map had ordered key value pairs (incresing by default )  while 
unordered_map stores key value pairs in non-ordered fashion , i.e , there is no ordering  .

map implements Red black trees while unordered_map implements hash table . 

map - search ,delete , insert  time = O(log(n))

unordered_map - average search , insert , delete time = O(1) , worst search, insert , delete  time O(n) 




*/

using namespace std ; 

void print (map<std :: string , float > &marks ) 
{
    if (!marks.empty()) {
        for (map<std:: string , float > :: iterator it = marks.begin() ; it != marks.end() ; ++it) 
        {
            cout << it->first << "\t" << it->second << endl ; 
        }
    }
    cout << endl ; 
}    // it's gonna store key values in ascending order 

int main() 
{
    map <std::string , float > marks ;
    cout << "Initial size : " << marks.size() << endl ; 
    // Let's insert some items into this map 
    marks["Dev"] = 45.3 ;
    marks["Arpitha"] = 56 ;
    marks["Hannah"] = 71 ; 
    print(marks )  ;

    marks.insert(pair<std::string , float > ("Katherine" , 52)) ;
    
    marks.insert(make_pair("Martin" , 99))  ;  
    // marks.insert(pair<std::string , float> ("Martin" , 99)) ;
    print (marks) ;

    // find function 
    using itr = map<std :: string , float >  :: iterator ;
    itr it  = marks.find("Arpitha") ; 
    cout << it->first << " -> "  << it->second << endl ; 
    it++  ;
    cout << it->first << " -> " << it->second << endl << endl ; 
    // find returns an iterator pointing to that key if the key is found otherwise  returns an iterator pointing 
    // to the end i.e , marks.end() 

    marks.emplace("Rahul" , 40)  ; 
    print(marks) ; 


    // now let's delete some keys 

    marks.erase("Dev") ;      // using key name to erase  
    print(marks) ; 

    marks.erase(marks.find("Rahul")) ; 
    print(marks) ; 


    marks.emplace("James" , 82) ; 
    marks.insert(pair<std::string ,float > ("Peter" , 23.8)) ;

    print(marks) ; 

    marks.erase(marks.begin()  , marks.find("Martin")) ;  // "Martin" is not included 
    print(marks) ; 

    marks.clear() ; 
    cout << "size after clearing : " << marks.size()  << endl; 


    return 0 ;  



}
