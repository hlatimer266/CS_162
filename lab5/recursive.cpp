#include <iostream>
#include <string>
#include <new>

using namespace std; 

void printBack(int size,std::string user_string){
	
	if (size == 0)
		std::cout <<  " " << std::endl;  
	else 
	{
		std::cout << user_string[size];	
		printBack(size-1, user_string);			
		}

}

int sumArray (int *&uArr,int  size_3){
	int sum_1;	
	if (size_3 < 0)
		return 0;
	else {
		std::cout << uArr[size_3] + sumArray(uArr,size_3-1);				
		return uArr[size_3] + sumArray(uArr,size_3-1);
}
}

int triangularNum(int n){

		
	int sum_4 = n;
	
	if (n == 0){
	
		return sum_4;
	}		
	else{
		

	


		return sum_4 + triangularNum(n-1);
	}


}

int main() {

	int size_array;
	int *userArray;
	int sum;
	int sum_2; 		
	int size_2;
	int n_1;
	std::string input_string; 
	std::cout << "Please enter a string" << std::endl;
	getline(std::cin,input_string);
	
	printBack(input_string.length(), input_string);
	
	std::cout << "Please enter the size of an array" << std::endl;
	std::cin >> size_2;
	userArray = new  int[size_2];
	std::cout << "Please enter a integer and press enter" << std::endl; 
	for (int i = 0; i < size_2; i++){
		std::cin >> userArray[i];
 
	}
	
	sum = sumArray(userArray,size_2);
	
	std::cout << sum << std::endl;

	std::cout << "Please enter a integer N" << std::endl;
	std::cin >> n_1;
	sum_2 = triangularNum(n_1);  
	std::cout << sum_2 << std::endl;
}
