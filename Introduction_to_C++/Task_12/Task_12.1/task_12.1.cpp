#include <Windows.h>

#include <iostream>
#include <string>
#include <fstream>

int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	std::ofstream outFile{"in.txt"};
	if (outFile.is_open()) {
		outFile << "Картошка капуста" << std::endl;
		outFile << "Малина клубника черешня" << std::endl;
		outFile << "Яблоко груша апельсин" << std::endl;			
	}
	outFile.close();
	
	std::ifstream inpFile{"in.txt", std::ios::app};
	if (inpFile.is_open()) {
		std::string data{};
		
		while (inpFile >> data) {
			std::cout << data << std::endl;
		}
	}
	inpFile.close();
} 