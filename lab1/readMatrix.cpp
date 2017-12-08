/**************************************************************
 * * Author: Harrison Latimer
 * * Date: 9/25/2017
 * Description: Implementation file for readMatrix() function 
 **************************************************************/

#include<iostream>
#include"readMatrix.hpp"

using namespace std; 

//Prompts user to enter integers to fill in either a 2x2 or 3x3 matrix and 
// populates the matrix.
void readMatrix(int **matPtr, int size){
	
	if (size == 2)
	{
		cout << "Please enter 4 integers (Press enter after each number)" << endl;
		cin >> matPtr[0][0] >> matPtr[0][1] >> matPtr[1][0] >>matPtr[1][1];
		
	}
	else if (size == 3)
	{
		cout << "Please enter 9 integers (Press enter after each number)" << endl;
		for (int i = 0; i < 3; i++){
			for(int j = 0; j < 3 ; j++)
				cin >> matPtr[i][j];
		}
				
	}
	
	return; 
}
