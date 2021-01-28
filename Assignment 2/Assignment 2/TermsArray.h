#pragma once
#include <string>
using namespace std;
class TermsArray
{
private:
	// Decleares an array of strings with the maxmin of 12 characters 
	 string sTermsArray[12];

public:

	//The constructor of the class
	TermsArray();

	//The destructors for the class
	~TermsArray();

	//gets the currently selected term
	string getSelectedTerm(int&);

	//gets the size of the array to use in a for loop.
	int getArraySize();


};

