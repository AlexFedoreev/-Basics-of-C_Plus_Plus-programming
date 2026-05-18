#include <Windows.h>

#include <iostream>

int main () {
	SetConsoleOutputCP(CP_UTF8);

	int arrSize{};
	std::cout << "Введите размер массива: ";
	std::cin >> arrSize;

	int* inpArr = new int[arrSize];
	for (int i = 0; i < arrSize; i++) {
		std::cout << "Введите элемент #" << i << " массива:" << std::endl;
		std::cin >> inpArr[i];
		std::cout << "inpArr[" << i << "]" << " = " << inpArr[i] << std::endl;
	}

	std::cout << "Введённый массив: ";
	for (int j = 0; j < arrSize; j++) {
		std::cout << inpArr[j] << " ";
	}

	delete[] inpArr;
}