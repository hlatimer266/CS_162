#include<iostream>
#include<fstream>
#include<istream>
#include<iomanip>
#include<string>
#include<vector>
#include<limits>
#include"SearchAlgos.h"

void SimpleSearch( std::string textfile, int tarValue)
{
	std::ifstream inFile(textfile, std::ios::in);
	std::vector<int> data;
	int count = 0;
	int nums;

	bool foundZero;

	//inFile.open(numtxt, std::ios::in);
	while (inFile >> nums)
		data.push_back(nums);
	

	for (int i = 0; i < data.size(); i++)
	{
		if (data[i] == tarValue) {
			std::cout << textfile <<":target value found" << std::endl;
			count++;
		}
			
	}
	if (count == 0)
		std::cout << textfile << ":target value not found" << std::endl;


};

void Sort(std::string textfile)
{
	std::ifstream inFile(textfile, std::ios::in);
	std::ofstream outputFile;
	std::vector<int> data;
	int nums,temp;
	int swapCount = 0;
	bool swap;
	std::string filename;

	while (inFile >> nums)
		data.push_back(nums);

	//Sort algorithm from Starting Out with C++ Early Objectives - Gaddis
	do
	{
		swap = false;
		for (unsigned count = 0; count <data.size()-1;count++)
		{
			if (data[count] > data[count + 1])
			{
				temp = data[count];
				data[count] = data[count + 1];
				data[count + 1] = temp;
				swap = true;
				swapCount++;
			}
		}
		
	} while (swap);
	
	if (swapCount == 0)
		std::cout << "No sorting needed on "<<textfile << std::endl;
	
	std::cout << textfile <<": sorted array "<<std::endl;
	for (int i = 0; i < data.size(); i++)
		std::cout << data[i] << " ";

	std::cout << "Please enter a file name to write to" << std::endl;
	std::cin >> filename;

	outputFile.open(filename);

	for (int i = 0; i < data.size(); i++)
		outputFile << data[i] << " ";
	outputFile.close();

};

void BinarySearch(std::string textfile, int tarV)
{
	std::ifstream inFile(textfile, std::ios::in);
	std::vector<int> data;
	int nums, temp;
	int swapCount = 0;
	bool swap;
	std::string filename;

	while (inFile >> nums)
		data.push_back(nums);

	//Sort algorithm from Starting Out with C++ Early Objectives - Gaddis
	do
	{
		swap = false;
		for (unsigned count = 0; count <data.size() - 1; count++)
		{
			if (data[count] > data[count + 1])
			{
				temp = data[count];
				data[count] = data[count + 1];
				data[count + 1] = temp;
				swap = true;
				swapCount++;
			}
		}

	} while (swap);

	//Binary search algorithm from Starting Out with C++ Early Objectives - Gaddis
	int first = 0,
	last = data.size() -1,
	middle,
	position = -1;
	bool found = false;

	while(!found && first <= last)
	{
		middle = (first + last) / 2;
		if (data[middle] == tarV)
		{
			found = true;
			position = middle;
		}
		else if (data[middle] > tarV)
			last = middle - 1;
		else
			first = middle + 1;
	}

	if (found == true)
		std::cout << textfile << ": target value found" << std::endl;
	else
		std::cout << textfile << ": target value not found" << std::endl;

};

void checkNum(int*resp)
{
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::cout << " Please Enter a number " << std::endl;

		std::cin >> *resp;
	}
}
