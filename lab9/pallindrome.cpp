/**************************************************************
 * * Author: Harrison Latimer
 * * Date: 11/26/2017
 * Description: Implementation file for pallindrome function
 **************************************************************/

#include"pallindrome.h"
#include<iostream>
#include<string>
#include<stack>
#include<sstream>
#include<vector>

void pallindrome(){
    std::stringstream ss;
    std::string userInput;
    std::vector<char> inputString;
    std::stack<char, std::vector<char>> InputString;


    std::stack<std::string> userPal;

    std::cout << "Please enter a string to receive the pallindrome of that string" << std::endl;
    getline(std::cin, userInput);

    for(int i = 0; i < userInput.size(); i++)
        InputString.push(userInput[i]);


    std::cout << userInput;
    while(!InputString.empty()){
        std::cout << InputString.top();
        InputString.pop();
    }


};
