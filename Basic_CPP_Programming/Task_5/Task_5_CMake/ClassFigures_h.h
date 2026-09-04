#pragma once

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
