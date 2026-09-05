
#pragma once
#include "ClassFigures_h.h"

//Определение класса фигур с четыремя вершинами
class FrSdFigure : public Figures {
protected:
	double a, b, c, d;
	unsigned int A, B, C, D;
public:
	FrSdFigure();
	void PrintInfoFigure() const override;
};
