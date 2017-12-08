/**************************************************************
 * * Author: Harrison Latimer
 * * Date: 9/25/2017
 * Description: Implementation file for readMatrix() function 
 **************************************************************/

#include<iostream>
#include"readMatrix.hpp"
#include"Determinant.hpp"

int main() {
	
 
	int matrixX, matrixY, deter; 
	
	cout << "Please enter the size of the matrix (2x2 or 3x3)" << endl;
	cout << "Enter 2 for 2x2 or 3 for 3x3" << endl;
	cin >> matrixX;
	
	if (matrixX > 3 || matrixX < 2){
		while (matrixX > 3 || matrixX < 2) {
		cout << "Invalid input. Please enter 2 for 2x2 or 3 for 3x3 " ;
		cin >> matrixX;
		}
	}
	
	matrixY = matrixX; 
	 	
	int** matrixPtr = new int* [matrixX];
	
	for (int i = 0; i < matrixX; ++i)
		matrixPtr[i] = new int[matrixY];
	
	
	for (int j = 0; j < matrixX; j++)
		for(int i=0; i < matrixX; i++)
			matrixPtr[i][j]=0;
			
				
	readMatrix(matrixPtr, matrixX);
	
	deter = determinant(matrixPtr, matrixX);
	
	cout << "Determinant = " << deter << endl;
	
	if (matrixX == 2){
	cout << matrixPtr[0][0];
	cout << matrixPtr[0][1] << endl;
	cout << matrixPtr[1][0];
	cout << matrixPtr[1][1] << endl;
		
	}
	
	else if (matrixX == 3){
	cout << matrixPtr[0][0];
	cout << matrixPtr[0][1];
	cout << matrixPtr[0][2] <<endl;
	cout << matrixPtr[1][0];
	cout << matrixPtr[1][1];
	cout << matrixPtr[1][2] << endl;
	cout << matrixPtr[2][0];
	cout << matrixPtr[2][1];
	cout << matrixPtr[2][2] <<endl;
	}
	
	
	for(int i=0; i < matrixY; ++i){
		delete [] matrixPtr[i];
	}
	
	delete [] matrixPtr;
	

}
