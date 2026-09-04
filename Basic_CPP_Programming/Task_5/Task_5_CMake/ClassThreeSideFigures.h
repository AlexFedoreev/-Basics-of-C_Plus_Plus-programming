#pragma once

#include "ClassFigures_h.h"

class ThrSdFigure : public Figures {
protected:
	double a, b, c; //Стороны
	unsigned int A, B, C; //Углы
public:
	ThrSdFigure();
	void PrintInfoFigure() const override;
};