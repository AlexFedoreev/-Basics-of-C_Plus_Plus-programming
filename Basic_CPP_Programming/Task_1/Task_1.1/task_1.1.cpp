#include <Windows.h>

#include <iostream>
#include <string>



int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	int monthNumber{};
	do {
		std::cout << "Введите номер месяца: " << std::endl;
		std::cin >> monthNumber;
		enum class Months {
			January = 1,
			February = 2,
			March = 3,
			April = 4,
			May = 5,
			June = 6,
			July = 7,
			August = 8,
			September = 9,
			October = 10,
			November = 11,
			December = 12
		};

		switch (static_cast<Months> (monthNumber))
		{
		case Months::January:
			std::cout << "Январь" << std::endl;
			continue;
		case Months::February:
			std::cout << "Февраль" << std::endl;
			continue;
		case Months::March:
			std::cout << "Март" << std::endl;
			continue;
		case Months::April:
			std::cout << "Апрель" << std::endl;
			continue;
		case Months::May:
			std::cout << "Май" << std::endl;
			continue;
		case Months::June:
			std::cout << "Июнь" << std::endl;
			continue;
		case Months::July:
			std::cout << "Июль" << std::endl;
			continue;
		case Months::August:
			std::cout << "Август" << std::endl;
			continue;
		case Months::September:
			std::cout << "Сентябрь" << std::endl;
			continue;
		case Months::October:
			std::cout << "октябрь" << std::endl;
			continue;
		case Months::November:
			std::cout << "Ноябрь" << std::endl;
			continue;
		case Months::December:
			std::cout << "Декабрь" << std::endl;
			continue;

		}
		if ((monthNumber > 12) || (monthNumber < 0)) {
			std::cout << "Неправильный номер!" << std::endl;
		}
	} while (monthNumber != 0);
	std::cout << "До свидания!" << std::endl;
}