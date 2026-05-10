#include <Windows.h>

#include <iostream>

int main() {
	SetConsoleOutputCP(CP_UTF8);

	int inputNum{}, pNum{}, sum{};
	std::cout << "Введите целое число:" << std::endl;
	std::cin >> inputNum;
	pNum = inputNum;
	for (int i = 1; i <= 10; ++i) {
		pNum = inputNum * i;
		std::cout << inputNum << " × " << i << " = " << pNum << std::endl;
	}
}
