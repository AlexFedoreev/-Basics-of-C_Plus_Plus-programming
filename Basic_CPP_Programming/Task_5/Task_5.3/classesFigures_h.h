#pragma once
#include <iostream>
class Figure {
protected:
	static int numEdges;
	static std::string figureName;
public:
	Figure();
	void printInfoFigure();
};


class Triangle : public Figure {
private:
	static int numEdges;
	static std::string figureName;
public:
	void printInfoFigure();
};

class Square : public Figure {
private:
	static int numEdges;
	static std::string figureName;
public:
	void printInfoFigure();;
};