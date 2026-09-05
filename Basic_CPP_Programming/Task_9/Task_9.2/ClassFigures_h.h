#pragma once
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
