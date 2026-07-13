#include <Windows.h>

#include <iostream>
#include <string>

struct Liveaddress {
	std::string city;
	std::string street;
	int housenumber;
	int flatnumber;
	int index;
};

void showstructure(Liveaddress& p) {
	std::cout << "Город: " << p.city <<std::endl;
	std::cout << "Улица: " << p.street << std::endl;
	std::cout << "Номер дома: " << p.housenumber << std::endl;
	std::cout << "Номер квартиры: " << p.flatnumber << std::endl;
	std::cout << "Индекс: " << p.index << std::endl;
	std::cout << std::endl;
};

int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	Liveaddress	Address1{ "Москва", "Арбат", 12, 8, 123456 };
	Liveaddress	Address2{ "Ижевск", "Пушкина", 59, 143, 953769 };
	
	showstructure(Address1);
	showstructure(Address2);
}
