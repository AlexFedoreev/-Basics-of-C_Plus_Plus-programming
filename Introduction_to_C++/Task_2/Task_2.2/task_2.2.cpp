#include<Windows.h>

#include <iostream>
#include <string>


int main() {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	std::string inputString;
	std::cout << "Введите слово:" << std::endl;
	std::getline(std::cin, inputString);
	std::cout << "Вы ввели:" << std::endl;
	std::cout << inputString << std::endl;
	return 0;
}