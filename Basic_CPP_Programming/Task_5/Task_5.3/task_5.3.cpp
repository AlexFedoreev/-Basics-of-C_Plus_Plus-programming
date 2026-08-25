#include <Windows.h>

#include <iostream>
#include <string>
#include <fstream>

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

	ThrSdFigure TSd1{};


	EqSidTriangle T1{};
	IssSidTriangle T2{};
	RgtAngTriangle T3{};

	FrSdFigure FSd1{};
	Rectangle1 S1{};
	Square S2{};
	Parllgramm S3{};
	Rhombus S4{};
	

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
