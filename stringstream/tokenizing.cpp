#include<iostream>
#include<sstream>

using namespace std ;
/*
Tokenizing a string denotes splitting a string with respect to some delimiter(s).

getline(stringsteam ss , string token , char delimitter )
*/

signed main () {
	string str = "100,00,00,200,90";// tokenize  this string with respect to ','

	stringstream ss(str) ;
	string token ; // will store tokens
	while (getline(ss , token , ',')) {
		cout << token << " " << token.length() << endl;
	}

	return 0 ;
}