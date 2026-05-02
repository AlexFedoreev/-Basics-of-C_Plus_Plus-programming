#include <Windows.h>

#include <iostream>



int main() {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int a{}, b{}, c{};
	std::cout << "Введите первое число" << std::endl;
	std::cin >> a;
	std::cout << "Введите второе число" << std::endl;
	std::cin >> b;
	std::cout << "Введите третье число" << std::endl;
	std::cin >> c;



	(a < b ?
		(a < c ?
			(b < c ?
				std::cout << "Результат:\t" << c << "\t" << b << "\t" << a //std::cout << "cba" 
				:
				std::cout << "Результат:\t" << b << "\t" << c << "\t" << a)	//std::cout << "bca"
			:
			std::cout << "Результат:\t" << b << "\t" << a << "\t" << c) //std::cout << "bac"
		:
		(b < c ?
			(a < c ?
				std::cout << "Результат:\t" << c << "\t" << a << "\t" << b	//std::cout << "cab" 
				:
				std::cout << "Результат:\t" << a << "\t" << c << "\t" << b) //std::cout << "cab"
			:
			std::cout << "Результат:\t" << a << "\t" << b << "\t" << c)); //std::cout << "abc"));

	return 0;
}