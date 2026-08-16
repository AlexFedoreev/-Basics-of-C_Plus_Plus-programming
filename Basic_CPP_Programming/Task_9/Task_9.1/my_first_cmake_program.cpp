// my_first_cmake_project.cpp: определяет точку входа для приложения.
//

#include <Windows.h>
#include <locale.h>

#include <iostream>
#include <string>

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	setlocale(LC_ALL, "");

	std::string name{};
	//std::cout << "Введите имя:";
	std::cout << "Введите имя:";
	std::cin >> name;
	std::cout << "Здравствуйте, " << name << std::endl;
}