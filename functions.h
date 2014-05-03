#ifndef FUNCTIONS
#define FUNCTIONS
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isNumb(string number)
{
	bool answ = true;
	for(int i = 0; i < number.length(); i++)
	{
		if(isalpha(number[i]))
		{
			answ = false;
		}
	}
	return answ;
}



#endif
