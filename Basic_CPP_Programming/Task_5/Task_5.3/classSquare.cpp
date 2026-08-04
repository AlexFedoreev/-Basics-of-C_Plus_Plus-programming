#include "classesFigures_h.h"

	int Square::numEdges = 4;
	std::string Square::figureName = "Квадрат";
	void Square::printInfoFigure() {
		std::cout << figureName << ". Количество сторон:" << numEdges << std::endl;
	}
