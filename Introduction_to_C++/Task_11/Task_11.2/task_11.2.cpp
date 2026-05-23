#include <Windows.h>

#include <iostream>
#include <string>

int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	std::string secretWorld, inputWorld;
	secretWorld = "Нетология";

	do {
		std::cout << "Угадайте слово: ";
		std::getline(std::cin, inputWorld);
		if (secretWorld.compare(inputWorld) != 0) {
			std::cout << "Неправильно" << std::endl;
		}
	} while (secretWorld.compare(inputWorld) != 0);

	std::cout << "Правильно! Вы победили! Загаданное слово — " << secretWorld << std::endl;
}