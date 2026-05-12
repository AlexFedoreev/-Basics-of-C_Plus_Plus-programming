#include <iostream>

#include <Windows.h>

int Fibonachchi(int inNum);
int result{};

int main() {
	SetConsoleOutputCP(CP_UTF8);
	int inNum{};
	
	std::cout << "Введите число Фибоначчи:" << std::endl;
	std::cin >> inNum;
	
	std::cout << "Последовательность чисел Фибоначчи равна: ";
	for (int i = 1; i <= inNum; i++) {
		std::cout << Fibonachchi(i) << " ";
	}
}

int Fibonachchi(int inNum) {
	
	if (inNum == 1) {
		return result = 0;
	}

	if (inNum == 2) {
		return result = 1;
	}
	
	return result = (Fibonachchi(inNum - 1) + Fibonachchi(inNum - 2));
}