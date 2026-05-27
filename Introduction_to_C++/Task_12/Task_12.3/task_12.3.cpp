#include <Windows.h>

#include <iostream>
#include <string>
#include <fstream>

int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	int iArrSize{};
	std::cout << "Введите размер массива = ";
	std::cin >> iArrSize;
	int* inpArr = new int[iArrSize]; //укороченная версия int* inpArr{new int [iArrSize]};

	for (int i = 0; i < iArrSize; i++) {
		std::cout << "Введите элемент массива под номером " << i + 1 << " = ";
		std::cin >> inpArr[i];
	}

		//Запись в файл
		std::cout << std::endl;
		std::ofstream outFile{ "out.txt" };
		outFile << iArrSize << "\n";
		for (int l = iArrSize - 1; l >= 0; l--) {
			if (l != 0) {
				outFile << inpArr[l] << " ";
			}
			else {
				outFile << inpArr[l];
			}
		}
		outFile.close();

		std::cout << std::endl;
		int a{}, f{};

		//Чтение с файла
		std::ifstream inp1File{ "out.txt" };
		inp1File >> f;
		int* outArr = new int[f] {};
		int j = 0;
		while (!inp1File.eof()) {
			inp1File >> outArr[j];
			j++;
		}
		inp1File.close();

		for (int t = 0; t < f; t++) {
			std::cout << outArr[t] << " ";
		};
		delete[] inpArr;
		delete[] outArr;
	}