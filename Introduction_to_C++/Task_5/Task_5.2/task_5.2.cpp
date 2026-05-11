#include <Windows.h>

#include <iostream>
#include <cstdlib>

int main() {
	SetConsoleOutputCP(CP_UTF8);
	int maxVal{}, minVal{};
	int arrTest[10]{};

	//Цикл определения массива
	std::cout << "Массив: ";
	for (int i = 0; i < std::size(arrTest); ++i) {
		arrTest[i] = rand() % 100;
		std::cout << arrTest[i] << " ";
	}
	minVal = arrTest[0];
	maxVal = arrTest[0];

	//Цикл поиска минимального и максимального значения
	for (int j=0; j < std::size(arrTest); ++j) {
		if (maxVal <= arrTest[j]) {
			maxVal = arrTest[j];
		}
		if (arrTest[j] <= minVal) {
			minVal = arrTest[j];
		}
	}
	std::cout << std::endl;
	std::cout << "Минимальный элемент: " << minVal <<std::endl;
	std::cout << "Максимальный элемент: " << maxVal << std::endl;

}