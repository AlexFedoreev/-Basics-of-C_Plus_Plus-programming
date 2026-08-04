#include "classesFigures_h.h"
	int Triangle::numEdges = 3;
	std::string Triangle::figureName = "Треугольник";
	void Triangle::printInfoFigure() {
		std::cout << figureName << ". Количество сторон:" << numEdges << std::endl;
	};
