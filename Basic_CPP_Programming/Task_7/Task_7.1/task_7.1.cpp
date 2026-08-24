#include <Windows.h>

#include <iostream>
#include <string>
#include <fstream>

int function1(std::string str, int forbidden_length);


int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	
		try
		{
			while (1 != 0) {
				std::string inWord{};
				int inLenght{};
				std::cout << "Введите запретную длину: ";
				std::cin >> inLenght;
				std::cout << "Введите слово: ";
				std::cin >> inWord;
				function1(inWord, inLenght);
			}
		}
		catch (const std::string& error_message)
		{
			std::cout << "Вы ввели слово запретной длины! До свидания" << std::endl;
		}
}



 int function1(std::string str, int forbidden_length) {
	int inputLenght = str.length();
	
	if (inputLenght == forbidden_length) throw std::string{ "Bad_Length"};

	std::cout << "Длина слова " << str << " равна " << inputLenght << std::endl;

	return inputLenght;
}