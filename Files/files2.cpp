#include<iostream>
#include<cstring>
#include<fstream>
using namespace std ; 

int main ()
{
    string file_name ;  int size ; 
    cout << "Enter the name of the file to be created : " << endl;
    getline(cin , file_name) ; 
    cout << "Enter the size of the array : " ; 
    cin >> size ; 
    int array[size] ; int array_2[size] ;
    cout << "Enter the elements : " << endl ;
    for ( int i = 0 ; i<size ; i++)
    {
        cin >> array[i] ; 
    }
    fstream o_file ; 
    o_file.open(file_name , ios::out) ; 
    o_file.write((char *) & array , sizeof(array)) ; 
    o_file.close() ; 

    fstream i_file ;
    i_file.open(file_name  , ios::in) ;
    i_file.read((char *) &array_2  , sizeof(array_2)) ; 
    i_file.close() ; 
    int min=array_2[0] , max=array_2[0] ; float avg = 0  ;

    for ( int i = 0 ; i<size ; i++)
    {
        if (array_2[i] > max)
        {
            max = array_2[i] ; 
        }
        if (array_2[i] < min)
        {
            min = array_2[i] ; 
        }
        avg += array_2[i] ; 
    }

    avg = avg/size ; 
    cout << "min , max , avg :" << min  << " " << max <<  " " << avg << endl; 


    return 0 ;


    

}