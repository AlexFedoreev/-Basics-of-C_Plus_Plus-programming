// Task_5_CMake.cpp: определяет точку входа для приложения.
#include <Windows.h>

#include <iostream>
#include <string>
#include <fstream>

//Headers Calculator
#include "FuncCalulator_h.h"

//Headers Counter
#include "ClassCounter_h.h"

//Headers Figure
#include "ClassFigures_h.h"

#include "ClassThreeSideFigures.h"
#include "ClassFourSideFigures.h"

#include "ClassRightAngleTriangle.h"
#include "ClassIsoscelesSideTriangle.h"
#include "EqualSidedTriangle.h"

#include "ClassRectangle.h"
#include "ClassSquare.h"
#include "ClassParallelogram.h"
#include "ClassRhombus.h"


// Функция вывода: принимает указатель на базовый класс Figure
void print_info(const Figures* fig) {
	if (fig) {
		fig->PrintInfoFigure();
	}
	else {
		std::cout << "Указатель на фигуру равен nullptr.\n";
	}
}


int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	//Calculator
	std::cout << "Калькулятор" << std::endl;
	double num1{}, num2{};
	std::string opsign;
	std::cout << "Введите первое число" << std::endl;
	std::cin >> num1;
	std::cout << "Введите второе число" << std::endl;
	std::cin >> num2;
	std::cout << "Введите знак операции (+, -, *, ÷, ^) " << std::endl;
	std::cin >> opsign;

	Calculator(num1, num2, opsign);
	std::cout << std::endl;

	//Counter
	std::string ans{};
	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет :" << std::endl;
	std::cin >> ans;

	Counter c1;

	if (ans == "Да") {
		int inpC{};
		std::cout << "Введите начальное значение счётчика:" << std::endl;
		std::cin >> inpC;
		c1=Counter(inpC);
	}
	else {
		Counter c1(1);
	}

	int i = 1;
	while (i == 1) {

		char inputV1{};
		std::cout << "Введите команду ('+', '-', '=' или 'x'):" << std::endl;
		std::cin >> inputV1;

		if (inputV1 == '+') {
			c1.increase();
			std::cout << "Значение счётчика увеличено" << std::endl;
		}

		else if (inputV1 == '-') {
			c1.decrease();
			std::cout << "Значение счётчика уменьшено" << std::endl;
		}

		else if (inputV1 == '=') {
			std::cout << "Значение: " << c1.getValue() << std::endl; // Выводим c1
		}

		else if (inputV1 == 'x') {
			std::cout << "До свидания!" << std::endl;
			break;
		}
		else {
			std::cout << "Введена неправильная команда!" << std::endl;
		}
	}
	std::cout << std::endl;

	//Figures
	Figures F1;

	ThrSdFigure TSd1{};
	EqSidTriangle T1{};
	IssSidTriangle T2{};
	RgtAngTriangle T3{};

	FrSdFigure FSd1{};
	Rectangle1 S1{};
	Square S2{};
	Parllgramm S3{};
	Rhombus S4{};

	print_info(&F1);

	print_info(&TSd1);
	print_info(&T1);
	print_info(&T2);
	print_info(&T3);

	print_info(&FSd1);
	print_info(&S1);
	print_info(&S2);
	print_info(&S3);
	print_info(&S4);

}

