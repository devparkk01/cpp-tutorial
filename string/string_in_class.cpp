#include <iostream>
#include <string>
using namespace std ;
class Employee
{
    int eid ; string name ; int age ; float salary ;

public :
    void getdata () ; void display_info () ; void incr_salary (int inc) ; void decr_salary (int decr) ; void new_salary ( ) ; void change_name() ;
};

void Employee :: getdata ()
{
    cout << "Enter name , eid , age , salary" << endl ;
    getline(cin , name) ;
    cin >> eid >> age >> salary  ;
}

void Employee :: display_info ()
{
    cout << "Name = " << name <<endl;
    cout << "Eid = " << eid <<endl ;
    cout << "Age = " << age << endl ;
    cout << "Salary = " << salary << endl ;

}

void Employee :: incr_salary (int inc)

{
    salary += inc ;
}

void Employee :: decr_salary (int dec )

{
     salary -= dec ;
}

void Employee :: new_salary ()
{
    cout << "Enter new salary : " ;
    cin >> salary ;
}

void Employee :: change_name ()
{
     cout << "Enter new name " << endl ;
     getline(cin ,name ) ;
}

int main()
{
    Employee e_1 ;
    e_1.getdata() ;
    e_1.display_info () ;
    // e_1.incr_salary(350) ;
    //e_1.change_name() ;
  //  e_1.display_info() ;
  e_1.new_salary() ;
  e_1.display_info() ;

    return 0 ;
}
