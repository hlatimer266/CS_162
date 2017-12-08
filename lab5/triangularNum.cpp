#include<iostream>
#include<string>
#include"triangularNum.h"

int triangularNum(int n) {


	int sum_4 = n;
	
	if (n == 0) {
		return sum_4;
	}
	else {

		return sum_4 + triangularNum(n - 1);
	}


}