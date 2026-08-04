#include "classesFigures_h.h"


	int Figure::numEdges = 0;
	std::string Figure::figureName = "Фигура";
	Figure::Figure() {};
	void Figure::printInfoFigure() {
		std::cout << figureName << ". Количество сторон:" << numEdges << std::endl;
	};
