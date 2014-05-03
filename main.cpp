#include <iostream>
#include <string>
#include <cctype>
#include "functions.h"

using namespace std;
bool isNumb(string number);

int main()
{
	int penny = 1;
	int nickel = 5;
	int dime = 10;
	int quarter = 25;
	bool quit = false;

	string cents;

	while(!quit)
	{
		cout << "Please enter cents, or type 'Q' to quit: ";
		cin >> cents;
		if(!isNumb(cents))
		{
			if(cents.length() != 0)
			{
				if(cents[1] == 'Q' || cents[0] == 'q')
				{
					quit = true;
				}
			}
		}
		else
		{
			int totalCents = atoi(cents.c_str());
			int totalQuarters = totalCents / quarter;
			totalCents %= quarter; 
			int totalDimes = totalCents / dime;
			totalCents %= dime;
			int totalNickels = totalCents / nickel;
			totalCents %= nickel;
			int totalPennies = totalCents / penny;
			cout << "Quarters: " << totalQuarters << ", Dimes: " << totalDimes << ", Nickels: " << totalNickels << ", Pennys: " << totalPennies << endl << endl;
		}

	}


}
