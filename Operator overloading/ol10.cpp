#include<iostream>
using namespace std ; 
/* We'll see ostream operator overloading here.but in this scenario operator overloading function 
is not declared as friend . 

so , how do we demonstrate operator overloading in this case . 

Idea : we'll use a normal function(not a member function ) . 
We know that friend function could access private and protected variable using the object 
which has been passed . But this time this function is a normal function so it can't access
those private and protected member variables . 
Therefore we'll retrieve private and protected member variables using another member functions 
(declared public) which returns these variables . 
*/

class Person {
	private :
	string first_name ;
	string last_name ;

	public : 
	Person (string first_name ,string last_name ) : first_name(first_name) , last_name(last_name) {}  
	string get_first_name(){ return first_name ;}  
	string get_last_name() {return last_name ;}  

}; 

//  

ostream & operator << (ostream &out , Person &p1 ) {
	out << "First name : " << p1.get_first_name() << ", Last name : " << 
	p1.get_last_name() ; 

	return out ; 
}


signed main () {
	Person p1 = Person("Dev " , "Prakash") ;
	// p1.display() ;
	cout << p1 << endl ; 

	return 0 ; 
}