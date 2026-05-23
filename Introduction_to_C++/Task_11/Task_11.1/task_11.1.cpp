#include <Windows.h>

#include <Windows.h>

#include <iostream>
#include <string>

int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	std::string name, surname, saluter;

	std::cout << "Введите Ваше имя: ";
	std::getline(std::cin, name);

	std::cout << "Введите Вашу Фамилию: ";
	std::getline(std::cin, surname);

	saluter = name + " " + surname;
	std::cout << "Привет, " << saluter;
}