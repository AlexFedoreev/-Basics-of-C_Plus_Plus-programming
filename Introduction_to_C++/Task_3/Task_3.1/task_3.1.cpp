#include <Windows.h>

#include <iostream>
#include <string>
#include <map>



int main() {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	std::cout << std::boolalpha;
	bool argumentFalse = false;
	bool argumentTrue = true;
	bool valFFand = {};
	bool valTFand = {};
	bool valFTand = {};
	bool valTTand = {};
	bool valFFor = {};
	bool valTFor = {};
	bool valFTor = {};
	bool valTTor = {};

	std::cout << "Для вывода таблицы истинности, введите && или ||:" << std::endl;
	std::string inputString;
	getline(std::cin, inputString);

	std::map < std::string, int > boolValues = {
		{"&&", 1},
		{"||", 2},
		};
	

	 switch (boolValues[inputString])
		{
	     case 1:
			 valFFand = {argumentFalse && argumentFalse};
			 valTTand = argumentTrue && argumentFalse;
			 valFTand = argumentFalse && argumentTrue;
			 valTTand = argumentTrue && argumentTrue;

			 std::cout << argumentFalse << "\t" << argumentFalse << "\t" << valFFand << std::endl;
			 std::cout << argumentTrue << "\t" << argumentFalse << "\t" << valTFand << std::endl;
			 std::cout << argumentFalse << "\t" << argumentTrue << "\t" << valFTand << std::endl;
			 std::cout << argumentTrue << "\t" << argumentTrue << "\t" << valTTand << std::endl;
			 break;
		 case 2:
			 valFFor = argumentFalse || argumentFalse;
			 valTFor = argumentTrue || argumentFalse;
			 valFTor = argumentFalse || argumentTrue;
			 valTTor = argumentTrue || argumentTrue;

			 std::cout << argumentFalse << "\t" << argumentFalse << "\t" << valFFor << std::endl;
			 std::cout << argumentTrue << "\t" << argumentFalse << "\t" << valTFor << std::endl;
			 std::cout << argumentFalse << "\t" << argumentTrue << "\t" << valFTor << std::endl;
			 std::cout << argumentTrue << "\t" << argumentTrue << "\t" << valTTor << std::endl;
			 break;
		 default:
			 std::cout << "Неверно введён символ" << std::endl;
			 break;
		};
};
