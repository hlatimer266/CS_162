

#include <iostream>
#include <string>
#include "printBack.h"

void printBack(int size, std::string user_string) {

	if (size < 0)
		std::cout << " " << std::endl;
	else
	{
		std::cout << user_string[size];
		printBack(size - 1 , user_string);
	}

}