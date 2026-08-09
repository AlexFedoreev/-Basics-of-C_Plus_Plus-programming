#include <Windows.h>

#include <iostream>
#include <string>

class Figure { //Базовый класс
protected:
	int numEdges;
	std::string figureName;
public:
	Figure() { numEdges = 0; figureName = "Фигура"; };
	virtual ~Figure() = default;

	virtual void printInfoFigure() const
	{
		std::cout << figureName << ". Количество сторон: " << numEdges << std::endl;
	}
};

//Описание классов с тремя вершинами

class ThrSdFigure : public Figure {
protected:
	double a, b, c; //Стороны
	unsigned int A, B, C; //Углы
public:
	ThrSdFigure() : Figure() {numEdges = 3; figureName = "Треугольник";
		a = 10; b = 20; c = 30; A = 10; B = 20; C = 30;
	};
	void printInfoFigure() const override {
		std::cout << figureName << std::endl;
		std::cout << "Стороны:" << " a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Углы:" << " A=" << A << " B=" << B << " C=" << C << std::endl;
		std::cout << std::endl;
	}
};

class RgtAngTriangle : public ThrSdFigure {
public:
	RgtAngTriangle() :ThrSdFigure() {
		figureName = "Прямоугольный треугольник";
	a = 10; b = 20; c = 30; A = 10; B = 20; C = 90; };
};

class IssSidTriangle : public ThrSdFigure {
public:
	IssSidTriangle() :ThrSdFigure() {
		figureName = "Равнобедренный треугольник";
		a = 20; b = 20; c = 30; A = 20; B = 20; C = 60;
	};
};

class EqSidTriangle : public ThrSdFigure {
public:
	EqSidTriangle() :ThrSdFigure() {
		figureName = "Равносторонний треугольник";
		a = 30; b = 30; b = 30; A = 60; B = 60; C = 60;
	};
};

//Описание классов с четыремя вершинами

class FrSdFigure : public Figure {
protected:
	double a, b, c, d;
	unsigned int A, B, C, D;
public:
	FrSdFigure() : Figure() { numEdges = 4; figureName = "Квадрат"; };
	void printInfoFigure() const override {
		std::cout << figureName << std::endl;
		std::cout << "Стороны:" << " a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Углы:" << " A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
		std::cout << std::endl;
	}
};

class Rectangle1 : public FrSdFigure {
public:
	Rectangle1() : FrSdFigure() {
		figureName = "Прямоугольник";
		a = 10; b = 20; c = 10; d = 20; A = 90; B = 90; C = 90, D=90;
	};
};

class Square : public FrSdFigure {
public:
	Square() : FrSdFigure() {
		figureName = "Квадрат";
		a = 30; b = 30; c = 30; d = 30; A = 90; B = 90; C = 90, D = 90;
	};
};

class Parllgramm : public FrSdFigure {
public:
	Parllgramm() : FrSdFigure() {
		figureName = "Параллелограмм";
		a = 30; b = 20; c = 30; d = 20; A = 60; B = 120; C = 60, D = 120;
	};
};

class Rhombus : public FrSdFigure {
public:
	Rhombus() : FrSdFigure() {
		figureName = "Ромб";
		a = 40; b = 40; c = 40; d = 40; A = 80; B = 100; C = 80, D = 100;
	};
};

// Функция вывода: принимает указатель на базовый класс Figure
void print_info(const Figure* fig) {
	if (fig) {
		fig->printInfoFigure();
	}
	else {
		std::cout << "Указатель на фигуру равен nullptr.\n";
	}
}

int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	EqSidTriangle T1{};
	IssSidTriangle T2{};
	RgtAngTriangle T3{};

	Rectangle1 S1{};
	Square S2{};
	Parllgramm S3{};
	Rhombus S4{};

	print_info(&T1);
	print_info(&T2);
	print_info(&T3);
	
	print_info(&S1);
	print_info(&S2);
	print_info(&S3);
	print_info(&S4);

}
