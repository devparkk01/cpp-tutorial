#include <iostream>
#include <string>
using namespace std;
/*Let's see some type conversion now */
/*1.Basic to class , 2.class to basic 3. class to class */
// Basic to class 
class Distance
{
	float feet; 
	float inch; 

public :
	Distance(float feet)
	{
		this->feet = feet; 
		inch = 0; 
	}
	Distance()
	{ ;}
	void show_data()
	{
		cout << "Feet = " << feet << " , inch = " << inch << endl; 
	}

};

// class to Basic
class Product
{
	char name[20];
	char brand[10];
	float price; 
public :
	void get_data();
	void display(); 
   // operator string() ; 
	operator float(); 

};

void Product::get_data()
{
	cout << "Enter Name of the product : ";
	cin >> name;
	cout << "Enter brand of the product : "; 
	cin >> brand; 
	cout << "Enter Price : ";
	cin >> price;
}
void Product::display()
{
	cout << "Name : " << name << " , Brand : " << brand << " , Price : " << price << endl; 
}

Product :: operator float()
{
	return price; 
}




int main()
{
	Distance dist; 
	float feet = 56; 
	dist = feet;    // feet is Passed as parameter for the constructor 

	dist.show_data(); 

	Product prod1; 
	prod1.get_data(); 
	prod1.display(); 
	float price = prod1; 
	cout << "Price is " << price; 


	return 0; 
}