#include <Windows.h>

#include <iostream>
#include <cstdlib>

int main() {
	SetConsoleOutputCP(CP_UTF8);
	int maxVal{}, minVal{}, iiMax{}, ijMax{}, iiMin{}, ijMin{};
	const int rows{ 3 }, cols{ 6 };
	int arrTest[rows][cols] {};

	//Цикл определения массива
	std::cout << "Массив: " << std::endl;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			arrTest[i][j] = rand() % 100;
			std::cout << arrTest[i][j] << "\t";
		}
		std::cout << std::endl;
	}

	//Поиск минимума и максимума
	for (int i1 = 0; i1 < rows; ++i1) {
		for (int j1 = 0; j1 < cols; ++j1) {
			if (maxVal <= arrTest[i1][j1]) {
				maxVal = arrTest[i1][j1];
				iiMax = i1;
				ijMax = j1;
			}
			if (arrTest[i1][j1] <= minVal) {
				minVal = arrTest[i1][j1];
				iiMin = i1;
				ijMin = j1;
			}
		}
	}

	std::cout << std::endl;
	std::cout << "Минимальный элемент: " << minVal << std::endl;
	std::cout << "Индекс минимального элемента: " << iiMin << " " << ijMin << std::endl;
	std::cout << "Максимальный элемент: " << maxVal << std::endl;
	std::cout << "Индекс максимального элемента: " << iiMax << " " << ijMax << std::endl;
}