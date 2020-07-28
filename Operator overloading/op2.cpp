/* operator overloading of >> and << operators 
>> is insertion operator << is extraction operator . cin is a predefined object of class istream while cout is a predefined 
object of class ostream 
*/

#include <iostream>
#include <string>
using namespace std ;

class student 
{
    string name ;
    string USN ; 
    public :
    friend void operator << (ostream &out , student &stu1) ; 
    friend void operator >> (istream &in , student &stu1) ; 
/*Argument has been passed by reference. it will not work if we pass argument by value because only a copy of the object that activated
    the call is passed . so any changes made to this copy will fail to reflect in the original object that is passed   */


} ; 

void operator << (ostream &out , student &stu1)
{
    out << "student's name = " << stu1.name << "\t" << "student's usn : " << stu1.USN ; 
}

void operator >> (istream &in , student &stu1)
{
    cout << "Enter Student's name :"  ;
    getline(in , stu1.name)  ; 
    cout << "Enter student's USN : " ; 
    in >> stu1.USN ; 
}

int main ()
{
    student stu1 ; 
    cin >> stu1; 
    cout << stu1 ; 


    return 0 ; 
}