#include <Windows.h>

#include <iostream>


double* createarray(int arraysize);

int main() {
	SetConsoleOutputCP(CP_UTF8);

	int arrSize{};
	std::cout << "Введите размер массива: ";
	std::cin >> arrSize;


	double* inpArr = createarray(arrSize);

	std::cout << "Массив: ";
	for (int i = 0; i < arrSize; i++) {
		std::cout << inpArr[i] << " ";
	}

	std::cout << std::endl;
	delete[] inpArr;

}

double* createarray(int arraysize) {
	double* crtArr = new double[arraysize] {};
	return crtArr;
}