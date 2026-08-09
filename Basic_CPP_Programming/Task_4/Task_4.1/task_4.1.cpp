#include <Windows.h>

#include <iostream>
#include <string>

class Figure { //Базовый класс
protected:
	int numEdges;
	std::string figureName;
public:
	Figure() { numEdges = 0; figureName = "Фигура"; };
	void printInfoFigure() const {
		std::cout << figureName <<". Количество сторон: " << numEdges << std::endl;
	}
};

class ThrSdFigure : public Figure {
public:
	ThrSdFigure() : Figure() { numEdges = 3; figureName = "Треугольник"; };
};

class FrSdFigure : public Figure {
public:
	FrSdFigure() : Figure() { numEdges = 4; figureName = "Квадрат"; };
};

int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	Figure Fig1{};
	ThrSdFigure Trig1{};
	FrSdFigure Sq1{};

	Fig1.printInfoFigure();
	Trig1.printInfoFigure();
	Sq1.printInfoFigure();
}
