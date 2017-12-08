/*********************************************************************
** Class Name: menu
** Date: 10/30/17
** Description: Header file for the menu functions. 
*********************************************************************/

#ifndef MENU_HPP
#define MENU_HPP

#include <string>

int intMenu(std::string question, bool isYorN = false, int maxSize = 200000000, int minSize = 1, \
	 bool isHeading = false, std::string heading = "");

char charMenu(std::string question, bool isYorN = false, bool isHeading = false, std::string heading = "");

#endif