/**************************************************************
 * * Author: Harrison Latimer
 * * Date: 11/19/2017
 * Description: Header file for SearchAlgos
 **************************************************************/
#ifndef SEARCHALGOS_HPP
#define SEARCHALGOS_HPP 

#include<iostream>
#include<fstream>
#include<istream>
#include<iomanip>
#include<string>

void SimpleSearch(std::string textfile, int tarValue);
void Sort(std::string textfile);
void BinarySearch(std::string textfile, int tarV);
void checkNum(int* resp);
#endif