#include <Windows.h>

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	int rows{}, cols{};
	std::cout << "Введите число строк: ";
	std::cin >> rows;
	std::cout << "Введите число столбцов: ";
	std::cin >> cols;
	std::cout << std::endl;

	//Создание массива
	int** crtArr{ new int* [rows] };
	for (int i = 0; i < rows; i++) {
		crtArr[i] = new int[cols] {};
	}
	//Инициализация массива
	for (int i1 = 0; i1 < rows; i1++) {
		for (int j1 = 0; j1 < cols; j1++) {
			crtArr[i1][j1] = rand() % 25 + 1;
		}
	}


	std::cout << "Массив с неперевёрнутыми стркоами:" << std::endl;
	//Вывод массива c неинвертированными строками на экран для проверки 
	for (int k1 = 0; k1 < rows; k1++) {
		for (int t1 = 0; t1 < cols; t1++) {
			std::cout << crtArr[k1][t1] << " ";
		}
		std::cout << std::endl;
	}

	std::cout << "Массив с перевёрнутыми строками:" << std::endl;
	//Вывод массива на экран для проверки перед записью в файл
	for (int i1 = 0; i1 < rows; i1++) {
		for (int j1 = cols-1; j1 >=0; j1--) {
			std::cout << crtArr[i1][j1] << " ";
		}
		std::cout << std::endl;
	}
	

	//Запись в файл
	std::ofstream outFile{ "in.txt" };
	outFile << rows << " " << cols << std::endl;

	for (int i2 = 0; i2 < rows; i2++) {
		for (int j2 = cols-1; j2 >= 0; j2--) {
			outFile << crtArr[i2][j2] << " ";
		}
		outFile << std::endl;
	}
	outFile.close();


	int rows1{}, cols1{};
	std::ifstream inpFile{ "in.txt" };
	inpFile >> rows1;
	inpFile >> cols1;

	int** inpArr{ new int* [rows1] };
	for (int i3 = 0; i3 < rows1; i3++) {
		inpArr[i3] = new int[cols1] {};
	}
	
	while (!inpFile.eof()) {
		for (int i4 = 0; i4 < rows1; i4++) {
			for (int j4 = 0; j4 < cols1; j4++) {
				inpFile >> inpArr[i4][j4];
			}
		}
	}
	inpFile.close();


	std::cout << "Массив, считанный с файла:" << std::endl;
	//Вывод массива, считанного с файла, на экран
	for (int i5 = 0; i5 < rows; i5++) {
		for (int j5 = 0; j5 < cols; j5++) {
			std::cout << inpArr[i5][j5] << " ";
		}
		std::cout << std::endl;
	}

	//Очистка памяти
	for (int j = 0; j < rows; j++) {
		delete[] crtArr[j];
		delete[] inpArr[j];
	}
	delete[] crtArr;
	delete[] inpArr;
}