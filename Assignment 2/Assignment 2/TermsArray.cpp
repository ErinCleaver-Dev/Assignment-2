#include "TermsArray.h"

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

TermsArray::~TermsArray()
{
}

string TermsArray::getSelectedTerm(int &iPos)
{

	return sTermsArray[iPos];

}

int TermsArray::getArraySize()
{
	return sizeof(sTermsArray);
}
