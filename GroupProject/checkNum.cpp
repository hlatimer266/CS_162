/*********************************************************************
** Class Name: checkNum
** Date: 10/30/17
** Description: Implementation file for the checkNum functions. Contains all
** the function definitions needed for the functions
*********************************************************************/

#include <string>
#include <cstdlib>
#include "checkNum.hpp"
using std::string;



bool checkInt(string strValue)
{
	if (string::npos != strValue.find_first_of("0123456789"))	//Does the string contain a number
	{
		int pos = strValue.find_first_of("0123456789");		//If it does record its position in the string

		if (pos > 0)	
		{
			if (int(strValue.find_first_of("-")) == (pos - 1))	//Check to see if there is a negative sign before the number found, 
			{												//if there is decrease the value of pos by 1
				pos -= 1;
			}
		}
		string sub = strValue.substr(pos, string::npos);	//Create a substring starting at the number to the end of the file 

		if (sub.length() < 10)								//Do not store the variable in firstInt if it is greater than 9 digits long
		{
			int firstInt = std::stoi(sub, nullptr, 10);			//so stoi can isolate the number and convert it to an integer

			if ((std::to_string(firstInt).length()) == strValue.length())	//Is this number the only thing in the string? If so return true
			{
				return true;
			}
		}
	}
	
	return false;
}

bool checkStr(std::string inputStr, bool yesOrNo)
{
	char input;
	if (inputStr.length() > 1) { return false; }	//We only want one letter of input
	input = inputStr[0]; ;							//Convert the string input to a char
	if (int(input) < 97) { input += 32; }			//If its uppercase make it lowercase

	if (yesOrNo)
	{
		if (input == 'y' || input == 'n')
		{
			return true;
		}
	}
	else
	{
		if (input == 'r' || input == 'p' || input == 's' || input == 'e')
		{
			return true;
		}
	}
	return false;
}
