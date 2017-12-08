/**************************************************************
 * * Author: Harrison Latimer
 * * Date: 10/7/2017
 * Description: Header file for output_Letters function
 **************************************************************/
 
 #include<iostream>
#include<fstream>
#include<istream>
#include<iomanip>
#include<string>

#include "outputLetters.hpp"

using namespace std;

void output_Letters(ofstream &outputFile, int*Count){
	
	string fileName;
	
	char abcArray[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	
	cout << "Please enter the name of file of your output file" << endl;
	cin >> fileName;
	
	outputFile.open(fileName.c_str());
  
  	for (int i = 0; i < 26 ; i++){
  		outputFile << abcArray[i] << " : "  << Count[i] << endl;
  		
  	}
  
  	outputFile.close();
	
};
