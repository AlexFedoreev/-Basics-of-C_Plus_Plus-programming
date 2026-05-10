#include <Windows.h>

#include <iostream>

int main() {
	SetConsoleOutputCP(CP_UTF8);
	int inputNum{}, sum{};
	do {
		std::cout << "Введите целое число или 0, чтобы закончить:" << std::endl;
		std::cin >> inputNum;
		sum = sum + inputNum;

	} while (inputNum != 0);
	std::cout << "Сумма:" << std::endl;
	std::cout << sum;
}