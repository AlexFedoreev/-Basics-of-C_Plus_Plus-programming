#include <Windows.h>

#include <iostream>
#include <string>
#include <fstream>

int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	std::cout << std::endl;
	std::ofstream outFile{ "in.txt" };
	const int arrSize = 10;
	int testArr[arrSize]{};
	for (int i = 0; i < std::size(testArr); ++i) {
		testArr[i] = rand() % 25 + 1;
		std::cout << testArr[i] << " ";
	}

	outFile << arrSize << " " << "\n";
	for (int i = 0; i < std::size(testArr); i++) {
		if (i != std::size(testArr) - 1) {
			outFile << testArr[i] << " ";
		}
		else {
			outFile << testArr[i];
		}
	}
	outFile.close();

	std::cout << std::endl;

	int a{}, f{};

	std::ifstream inp1File{ "in.txt" };
	inp1File >> f;
	int* inpArr = new int[f] {};
	int j = 0;
	while (!inp1File.eof()) {
		inp1File >> a;
		inpArr[j] = a;
		j++;
	}
	inp1File.close();

	std::cout << std::endl;
	for (int k = f - 1; k >= 0; k--) {
		std::cout << inpArr[k] << " ";
	};
	delete[] inpArr;
}