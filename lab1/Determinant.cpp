/**************************************************************
 * * Author: Harrison Latimer
 * * Date: 9/25/2017
 * Description: Implementation file for determinant() function 
 **************************************************************/

#include<iostream>
#include"Determinant.hpp"

using namespace std; 

//Function takes 2x2 or 3x3 matrix and returns the determinant of the matrix
int determinant(int **matPtr, int size){
	int deterMinant;
	if (size == 2 ){
		deterMinant = ((matPtr[0][0])*(matPtr[1][1]))-((matPtr[0][1])*(matPtr[1][0]));
	
	}
	else if (size == 3){
		deterMinant=((matPtr[1][1])*(matPtr[2][2]))-((matPtr[1][2])*(matPtr[2][1]));
	}
	
	return deterMinant;
} 

