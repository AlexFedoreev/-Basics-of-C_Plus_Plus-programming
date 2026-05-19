#include <Windows.h>

#include <iostream>
#include <string>

int main() {
	SetConsoleOutputCP(CP_UTF8);

	std::string name, surname, helloyer;

	std::cout << "Введите Ваше имя: ";
	std::getline(std::cin, name);

	std::cout << "Введите Вашу Фамилию: ";
	std::getline(std::cin, surname);

	helloyer = name + " " + surname;
	std::cout << "Привет, " << helloyer;
}