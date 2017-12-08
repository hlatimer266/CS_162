/**************************************************************
 * * Author: Harrison Latimer
 * * Date: 10/7/2017
 * Description: Implementation file count_Letters function. 
 * Function takes in an ifstream object and a pointer to an array 
 * and counts the number of time a specific letter occurs in every 
 * in every line of text. Stores the results in the array passed in.
 **************************************************************/


#include<iostream>
#include<fstream>
#include<istream>
#include<iomanip>
#include<string>

#include "countLetters.hpp"

using namespace std; 

void count_Letters(ifstream &file,int *Count ){
	
	string data;
	
	char abcArray[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	
	getline(file,data);
	
			for (int i = 0; i < data.length(); i++)
			{
				
					for (int j = 0; j < 26; j++){
						
						
						if (abcArray[j] == tolower(data[i]))
						{
							Count[j] += 1;
						}
						
					}
					
			}
			
		
	
};
