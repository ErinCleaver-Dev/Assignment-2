#include "TermsArray.h"

//The constructor of the class
//Assigns the values to the terms.  
TermsArray::TermsArray()
{

	this->sTermsArray[0] = "home";
	this->sTermsArray[2] = "Accurate";
	this->sTermsArray[3] = "trouble";
	this->sTermsArray[4] = "random";
	this->sTermsArray[5] = "tiger";
	this->sTermsArray[6] = "ant";
	this->sTermsArray[7] = "puzzle";
	this->sTermsArray[8] = "apple";
	this->sTermsArray[9] = "bluebarries";
	this->sTermsArray[10] = "cookies";
	this->sTermsArray[11] = "pineapple";


}


//The destructors for the class
TermsArray::~TermsArray()
{
}


//gets the currently selected term
string TermsArray::getSelectedTerm(int &iPos)
{

	return sTermsArray[iPos];

}

//gets the size of the array to use in a for loop.
int TermsArray::getArraySize()
{
	return sizeof(sTermsArray);
}
