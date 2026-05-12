#include <Windows.h>

#include <iostream>

int powerUp(int value, int power, int result);

int main() {
	SetConsoleOutputCP(CP_UTF8);
	powerUp(5, 2, 1);
	powerUp(3, 3, 1);
	powerUp(4, 4, 1);
}

int powerUp(int value, int power, int result) {
	for (int i = 0; i < power; i++) {
		result *= value;
	}
	std::cout << value << " в степени " << power << " = " << result << std::endl;
	return result;
}
