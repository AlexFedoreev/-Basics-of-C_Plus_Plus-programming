#include <Windows.h>

#include <iostream>
#include <string>

struct personBankNumber {
	int banknumber;
	std::string personname;
	float money;
};

void renewBank(personBankNumber& p, float newSumm) {
	p.money = newSumm;
};

int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	int bankNumb{};
	std::string name1{};
	float summ1{};
	float summ2{};

	std::cout << "Введите номер счёта : " << std::endl;
	std::cin >> bankNumb;
	std::cout << "Введите имя Владельца счёта : " << std::endl;
	std::cin >> name1;
	std::cout << "Введите баланс счёта : " << std::endl;
	std::cin >> summ1;
	std::cout << "Введите новый баланс счёта : " << std::endl;
	std::cin >> summ2;

	personBankNumber person1;
	person1.banknumber = bankNumb;
	person1.personname = name1;
	person1.money = summ1;

	renewBank(person1, summ2);
	
	std::cout << "Ваш счёт:" << std::endl;
	std::cout << "Номер счёта: " << person1.banknumber << std::endl;
	std::cout << "Имя владельца счёта: " << person1.personname << std::endl;
	std::cout << "Баланс счёта: "  << person1.money << std::endl;


	//Не хватает функции вывода через перегрузку оператора<<

}
