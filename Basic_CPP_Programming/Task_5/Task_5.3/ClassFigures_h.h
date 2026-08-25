#pragma once
#include "ClassFigures_h.h"

#include <iostream>

//Определение базового класса
class Figures {
protected:
	int numEdges;
	std::string figureName;
public:
	Figures();
	virtual ~Figures() = default;
	virtual void PrintInfoFigure() const;
};

/*


//Описание класса "прямоугольник"
class Rectangle1 : public FrSdFigure {
public:
	Rectangle1();
};

//Описание класса "квадрат"
class Square : public FrSdFigure {
public:
	Square();
};

//Описание класса "параллелограмм"
class Parllgramm : public FrSdFigure {
public:
	Parllgramm();
};

//Описание класса "ромб"
class Rhombus : public FrSdFigure {
public:
	Rhombus();
};
*/