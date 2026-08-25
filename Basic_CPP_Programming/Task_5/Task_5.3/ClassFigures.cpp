#include <iostream>
#include <string>

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

//Описание базового класса
Figures::Figures() { numEdges = 0; figureName = "Фигура"; };
void Figures::PrintInfoFigure() const {
		std::cout << figureName << std::endl;
		std::cout << ". Количество сторон: " << numEdges << std::endl;
	};


//Описание классов с тремя вершинами
ThrSdFigure::ThrSdFigure() : Figures() {
		numEdges = 3;
		figureName = "Треугольник";
		a = 10; b = 20; c = 30; A = 10; B = 20; C = 30;
	};
void ThrSdFigure::PrintInfoFigure() const  {
		std::cout << figureName << std::endl;
		std::cout << "Стороны:" << " a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы:" << " A=" << A << " B=" << B << " C=" << C << std::endl;
		std::cout << std::endl;
	};

//Описание класса "прямоугольный треугольник"
RgtAngTriangle::RgtAngTriangle() : ThrSdFigure() {
		figureName = "Прямоугольный треугольник";
	a = 10; b = 20; c = 30; A = 10; B = 20; C = 90; };

//Описание класса "равнобедренный треугольник"
IssSidTriangle::IssSidTriangle() : ThrSdFigure() {
	figureName = "Равнобедренный треугольник";
	a = 20; b = 20; c = 30; A = 20; B = 20; C = 60;
};

//Описание класса "равносторонний треугольник"
EqSidTriangle::EqSidTriangle() :ThrSdFigure() {
		figureName = "Равносторонний треугольник";
		a = 30; b = 30; b = 30; A = 60; B = 60; C = 60;
};


//Описание классов с четыремя вершинами
FrSdFigure::FrSdFigure() : Figures() {
		numEdges = 4; figureName = "Четырёхугольник";
		a = 10; b = 20; c = 10; d = 20; A = 90; B = 90; C = 90, D = 90;
	};
void FrSdFigure::PrintInfoFigure() const  {
	std::cout << figureName << std::endl;
	std::cout << "Стороны:" << " a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
	std::cout << "Углы:" << " A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
	std::cout << std::endl;
};

//Описание класса "прямоугольник"
Rectangle1::Rectangle1() : FrSdFigure() {
	figureName = "Прямоугольник";
	a = 10; b = 20; c = 10; d = 20; A = 90; B = 90; C = 90, D = 90;
};

//Описание класса "квадрат"
Square::Square() : FrSdFigure() {
	figureName = "Квадрат";
	a = 30; b = 30; c = 30; d = 30; A = 90; B = 90; C = 90, D = 90;
};

//Описание класса "параллелограмм"
Parllgramm::Parllgramm() : FrSdFigure() {
	figureName = "Параллелограмм";
	a = 30; b = 20; c = 30; d = 20; A = 60; B = 120; C = 60, D = 120;
};

//Описание класса "ромб"
Rhombus::Rhombus() : FrSdFigure() {
	figureName = "Ромб";
	a = 40; b = 40; c = 40; d = 40; A = 80; B = 100; C = 80, D = 100;
};