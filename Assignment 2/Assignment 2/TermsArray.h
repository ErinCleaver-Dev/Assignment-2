#pragma once
#include <string>
using namespace std;
class TermsArray
{
private:

	 string sTermsArray[12];

public:

	TermsArray();
	~TermsArray();

	
	string getSelectedTerm(int&);
	int getArraySize();


};

