#include <iostream>
#include<string>
using namespace std;
class State_bank ;
class Allahabad_bank
{
	string name;
	long unsigned account_no;
	float balance;
public:
	Allahabad_bank () {}
	Allahabad_bank(State_bank ac1);
	 // constructor never returns a value , but a function may return
	void display();
};

class State_bank
{
	string name;
	long unsigned  account_no;
	float balance;

public:
	State_bank() {}
	void display();
	string get_name();
	float get_balance();
	State_bank(string name, long unsigned account_no, float balance);

};

void Allahabad_bank::display()
{
	cout << "Account details :" << endl;
	cout << "Name = " << name << endl;
	cout << "Account no = " << account_no << endl;
	cout << "Balance = " << balance << endl;
}

State_bank::State_bank(string name, long unsigned  account_no, float balance)
{
	this->name = name;
	this->account_no = account_no;
	this->balance = balance;
}


Allahabad_bank::Allahabad_bank(State_bank ac1)
{
	name = ac1.get_name();
	account_no = 142353;
	balance = ac1.get_balance();
}

void State_bank::display()
{
	cout << "Account details :" << endl;
	cout << "Name = " << name << endl;
	cout << "Account no = " << account_no << endl;
	cout << "Balance = " << balance << endl;

}

string State_bank:: get_name()
{
	return name;
}
float State_bank::get_balance()
{
	return balance;
}


int main()
{
	// State_bank sac1 ;
    State_bank sac1("dev" , 534, 323.7);
    Allahabad_bank aac1 ;
    aac1 = sac1 ;
    aac1.display() ;

	return 0;
}
