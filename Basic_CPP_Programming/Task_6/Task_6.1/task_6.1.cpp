#include <Windows.h>

#include <iostream>

#define MODE 0
//#undef MODE

#ifndef MODE
#error "Необходимо объявить MODE"
#endif // MODE


#if MODE == 0
	int main() {
		SetConsoleOutputCP(CP_UTF8);
		SetConsoleCP(CP_UTF8);
		std::cout << "Работаю в тренировочном режиме" << std::endl;}

#elif MODE == 1
	int add(int a, int b) {
		int sum{};
		sum = a + b;
		std::cout << "Результат сложения: " << sum;
		return sum;
	};

	int main() {
		SetConsoleOutputCP(CP_UTF8);
		SetConsoleCP(CP_UTF8);
		std::cout << "Работаю в боевом режиме" << std::endl;
		int a{}, b{};
		std::cout << "Введите число 1" << std::endl;
		std::cin >> a;
		std::cout << "Введите число 2" << std::endl;
		std::cin >> b;

		add(a, b);
	}
#else
	int main() {
		SetConsoleOutputCP(CP_UTF8);
		SetConsoleCP(CP_UTF8);
		std::cout << "Неизвестный режим. Завершение работы." << std::endl;
	}
#endif