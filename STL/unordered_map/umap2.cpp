#include<iostream>
#include<vector>
#include<unordered_map> 
#define endl '\n'
#define un unordered_map<string , vector<int> > 
#define iter un :: iterator 

using namespace std;  

//  for printing the vector<int>
void print(vector<int> &vec) {
    for (int i = 0 ; i < vec.size() ; ++i ) {
        cout << vec[i] << " "  ; 
    }
}

//  for printing the unordered_map 
void print(un & umap ) {
    for (iter it = umap.begin() ; it != umap.end() ;  ++it ) {
        cout << it->first << " : "  ; 
        print(it->second) ; 
        cout << endl; 
    }
}



int main () {
    unordered_map<string , vector<int> > marks ; 
    marks["Rohan"] = vector<int>{3 , 4 ,5 ,2 } ; 
    marks["Sohan"] = vector<int>{4 , 5 } ; 
    marks.insert({"Ram" , {3 , 5 ,2 , 9 }}) ; 
    marks.insert(make_pair("Karan" , vector<int>{ 9 , 13 ,44 ,  2}));  
    // print(marks) ; 

//  adding marks to Sohan 

    iter it = marks.find("Sohan") ; 
    it->second.push_back(20) ; 
    it->second.push_back(87) ;
     
    print(marks) ; 


    return 0 ; 
}