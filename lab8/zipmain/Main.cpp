/**************************************************************
 * * Author: Harrison Latimer
 * * Date: 11/19/2017
 * Description: main method for search algos
 **************************************************************/
#include"SearchAlgos.h"

int main()
{
	std::string txt1 = "num.txt";
	std::string txt2 = "early.txt";
	std::string txt3 = "mid.txt";
	std::string txt4 = "end.txt";
	int searchVal = 0;

	std::string textArry[4] = { txt1, txt2, txt3, txt4 };
	
	std::cout << "What is the target value?" << std::endl;
	std::cin >> searchVal;
	checkNum(&searchVal);

	for (int i = 0; i < 4; i++) 
		SimpleSearch(textArry[i], searchVal);
	std::cout << " " << std::endl;
	for (int k = 0; k < 4; k++)
		Sort(textArry[k]);
	std::cout << " " << std::endl;
	for (int j = 0; j < 4; j++)
		BinarySearch(textArry[j], searchVal);
	


	system("PAUSE");
    return 0;
}