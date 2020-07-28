#include <iostream>
#include <string>
using namespace std;

class Oracle
{
	string first;
	string last;
	int age;
	long long  unsigned contact;
	string city;

public :
	Oracle() {}
	Oracle(string first, string last, int age, long long  unsigned contact, string city);
	string full_name() ; 
	string  mailID();
	void details() ; 
};

string Oracle::mailID()
{
	string email = first + last + "@" + "Oracle.com";
	return email;
}

Oracle ::Oracle(string first, string last, int age, long long  unsigned contact, string city)
{
	this->first = first;
	this->last = last;
	this->age = age;
	this->contact = contact;
	this->city = city;

}

string Oracle :: full_name()
{
	return first + " " + last ; 
 
}

void Oracle :: details()
{
	cout << "Full name = " << full_name() << endl  ; 
	cout << "Company mail = " <<  mailID() << endl ;
	cout << "Contact = " << contact << endl ; 
}




class IBM
{
	string first;
	string last;
	int age;
	long long  unsigned contact;
	string city;

public :
	IBM () {}
	IBM(string first, string last, int age, long long  unsigned contact, string city);
	string mailID();
	operator Oracle ();
};

IBM::IBM(string first, string last, int age, long long  unsigned contact, string city)
{
	this->first = first;
	this->last = last;
	this->age = age;
	this->contact = contact;
	this->city = city;

}

string IBM::mailID()
{
	string mail = first + last + "@" + "ibm.com";
	return mail;
}

IBM ::operator Oracle ()
{
// 	Oracle Oemp1;
	Oracle Oemp1(first, last, age, contact, city);
	return Oemp1;

}


int main()
{
	IBM iemp1("Dev", "Parkk", 19, 6362968768, "Bengaluru");
	cout << iemp1.mailID()  << endl ;
	Oracle oemp1 ;
    oemp1 = iemp1 ;
	cout << "Full name : "  << oemp1.full_name() << endl ; 
	oemp1.details() ; 

	return 0;
}
