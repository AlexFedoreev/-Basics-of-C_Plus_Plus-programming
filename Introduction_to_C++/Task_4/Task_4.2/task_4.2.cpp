#include <Windows.h>

#include <iostream>

int main() {
	SetConsoleOutputCP(CP_UTF8);
	int inputNum{}, numMod{ 1 }, cNum{}, decNum{ 10 }, sum{};
	std::cout << "Введите целое число:" << std::endl;
	std::cin >> inputNum;
	cNum = inputNum;
	while (cNum != 0)
	{
		numMod = cNum % decNum;
		sum = sum + numMod;
		cNum = cNum / decNum;
	}
	std::cout << "Сумма цифр числа " << inputNum << ": ";
	std::cout << sum;
}