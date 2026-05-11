#include<Windows.h>

#include <iostream>

int main() {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int inputDigit{};
	std::cout << "Введите число:" << std::endl;
	std::cin >> inputDigit;
	std::cout << "Вы ввели:" << std::endl;
	std::cout << inputDigit;
	return 0;
}