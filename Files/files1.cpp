#include<iostream>
#include <fstream>
#include<cstring>
using namespace std ; 

int main ()
{
    string file_name ;  char name[20] ; 
    cout << "Enter  name of the file to be read : "  << endl ;
    getline(cin , file_name) ; 
    fstream i_file ;  
    i_file.open(file_name  , ios::in) ; 
    cout << "Enter name of the file to be created : " << endl ;
    getline(cin , file_name) ; 
    fstream o_file (file_name , ios::out) ;
    while (i_file.eof() == 0 )
    {
        i_file.getline(name ,20) ; 
        o_file  << name << endl ; 
    }
    i_file.close() ; 
    o_file.close() ; 


    return 0; 
}
