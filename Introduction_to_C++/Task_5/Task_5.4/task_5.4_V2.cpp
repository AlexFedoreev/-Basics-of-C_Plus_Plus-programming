#include <Windows.h>

#include <iostream>
#include <cstdlib>

int main() {
	SetConsoleOutputCP(CP_UTF8);
	int buffConst{}, arrTest[10]{};

	//Цикл определения массива (случайными числами)
	std::cout << std::endl;
	std::cout << "Массив до сортировки: ";
	for (int i = 0; i < std::size(arrTest); ++i) {
		arrTest[i] = rand() % 25 + 1;
		std::cout << arrTest[i] << "\t";
	}
	std::cout << std::endl;

	//Сортировка "обратным пузырьком"
	for (int i = (std::size(arrTest)-1); i >= 0; i--) {
		for (int j = (std::size(arrTest) - 1); j > 0; j--) {
			if (arrTest[j - 1] > arrTest[j]) {
				buffConst = arrTest[j];
				arrTest[j] = arrTest[j - 1];
				arrTest[j - 1] = buffConst;
			}
		}
	}

	std::cout << std::endl;
	std::cout << "Массив после сортировки: ";
	for (int i = 0; i < std::size(arrTest); ++i) {
		std::cout << arrTest[i] << "\t";
	}
}
