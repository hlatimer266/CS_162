/**************************************************************
* * Author: Harrison Latimer
* * Date: 10/28/2017
* Description: Implementation file for sumArray function
**************************************************************/
#include <iostream>
#include <string>
#include "sumArray.h"

int sumArray(int *&uArr, int  size_3) {
	
	if (size_3 < 0) {
		return  0;
	}
	else {
		
		return uArr[size_3] + sumArray(uArr, size_3 - 1);
		
	}
}

