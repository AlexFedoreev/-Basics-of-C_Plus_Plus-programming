#include <iostream>
#include <cstdlib>

int main() {
	std::cout << std::endl;
	int arrTest[10]{};

	//Цикл определения массива
	for (int i = 0; i < std::size(arrTest); ++i) {
		arrTest[i] = rand() % 10 + 0;
		if (i == 9) {
			std::cout << arrTest[i];
		}
		else {
			std::cout << arrTest[i] << ", ";
		}
	}
}