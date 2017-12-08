/**************************************************************
 * * Author: Harrison Latimer
 * * Date: 10/7/2017
 * Description: main method for counting letters
 **************************************************************/
 
 #include<iostream>
#include<fstream>
#include<istream>
#include<iomanip>
#include<string>

#include "outputLetters.hpp"
#include "countLetters.hpp"

using namespace std;


int main() {
	


	ifstream inFile;
	ofstream outFile;
	string filePath;
	
	
	int abcCount[26] = {0};
	
	cout << "Please enter a file path" << endl;
	cin >> filePath;
	inFile.open(filePath.c_str()); 
	
	while (!inFile) {
        
        cout << "please reenter a name" << endl;
		cin >> filePath;
		inFile.open(filePath.c_str());  
        
    }
    
	
	while (inFile.peek() != EOF){
		
		for (int i = 0; i < 26; i++)
			   {
			       abcCount[i] = 0;
			   }
		
		
		count_Letters(inFile, abcCount);
		
		output_Letters(outFile, abcCount);
		
			
		
	}
	inFile.close();
	
}
