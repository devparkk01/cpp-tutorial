#include <iostream>
using namespace std ; 

// Create an array of objects  ...

class manager 
{
    char  name[20] ; 
    int age ; 
    float salary ; 

    public :
    manager() {} 
    void set_data() ; 
    void display() ; 

} ;

void manager :: set_data()
{  
    cout << "Enter the name of the employee : " ;
    cin >> name ; 
    cout << "Enter  the age of the employee : " ; 
    cin >> age ; 
    cout << "Enter the salary of the employee : " ;
    cin >> salary ; 
}

void manager :: display ()
{
    cout << "Name = " << name << endl ;
    cout << "Age = " << age << endl ; 
    cout << "Salary = " << salary << endl ; 

}

int main()
{

    int n ; 
    cout << "Enter the no of emoloyees :"  ; 
    cin >> n ; 
    manager emp[n] ;          // Array of objects 
    for ( int i = 0 ; i < n ; i++)
    {
        emp[i].set_data() ;
    }
    cout << "Displaying data of the employees :" << endl ; 
    for ( int i = 0 ; i < n ; i++)
    {
        emp[i].display() ; 
    }

    return 0 ; 
}