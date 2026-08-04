#include "classesFigures_h.h"

#include <Windows.h>

#include <iostream>
#include <string>
#include <fstream>

int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	Figure Fig1{};
	Triangle Trig1{};
	Square Sq1{};
	Fig1.printInfoFigure();
	Trig1.printInfoFigure();
	Sq1.printInfoFigure();
}
