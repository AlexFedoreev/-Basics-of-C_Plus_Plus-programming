#include <Windows.h>

#include <iostream>

int main() {
	SetConsoleOutputCP(CP_UTF8);

	int intVal{};
	short shrtVal{};
	long lngVal{};
	long long llngVal{};
	float fltVal{};
	double dblVal{};
	long double ldblVal{};
	bool bVal{};

	std::cout << std::endl;
	std::cout << "int: " << &intVal << "\t" << sizeof(intVal) << std::endl;
	std::cout << "short: " << &shrtVal << "\t" << sizeof(shrtVal) << std::endl;
	std::cout << "long: " << &lngVal<< "\t" << sizeof(lngVal) << std::endl;
	std::cout << "long long: " << &llngVal << "\t" << sizeof(llngVal) << std::endl;
	std::cout << "float: " << &fltVal << "\t" << sizeof(fltVal) << std::endl;
	std::cout << "double: " << &dblVal << "\t" << sizeof(dblVal) << std::endl;
	std::cout << "long double: " << &ldblVal << "\t" << sizeof(ldblVal) << std::endl;
	std::cout << "bool: " << &bVal << "\t" << sizeof(bVal) << std::endl;

}