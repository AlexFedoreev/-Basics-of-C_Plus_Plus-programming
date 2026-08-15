#include <Windows.h>

#include <iostream>
#include <string>

class Figures { //Базовый класс
protected:
    int numEdges;
    std::string figureName;
    std::string figureStatus;
public:
    Figures() { numEdges = 0; figureName = "Произвольная фигура"; figureStatus = "Неизвестная"; };
    virtual ~Figures() = default;

    virtual void PrintInfoFigure()
    {
        std::cout << figureStatus << std::endl;
        std::cout << figureName << ". Количество сторон: " << numEdges << std::endl;
    }
    virtual bool CheckFigureStatus() = 0;
};

class Figure : public Figures {
public:
    Figure() : Figures() { numEdges = 0; }

    bool CheckFigureStatus() override {
        this->figureStatus = "Правильная";
        return 0;
    }

    void PrintInfoFigure() override {
        CheckFigureStatus();
        std::cout << figureName << ":" << std::endl;
        std::cout << figureStatus << std::endl;
        std::cout << figureName << "Количество сторон : " << numEdges << std::endl;
    }
};


class Triangle : public Figures {
protected:
    double a, b, c; //Стороны
    unsigned int A, B, C; //Углы
public:
    Triangle() : Figures() {
        numEdges = 3; figureName = "Треугольник", figureStatus = "Неизвестная";
        a = 10; b = 20; c = 30;
        A = 10; B = 20; C = 30;
    };
    bool CheckFigureStatus() override {
        unsigned int A1, B1, C1;
        A1 = this->A;
        B1 = this->B;
        C1 = this->C;

        if ((A1 + B1 + C1) == 180) { this->figureStatus = "Правильная"; }
        else {
            this->figureStatus = "Неправильная";
        }
        return 0;
    };
    void PrintInfoFigure() override {
        CheckFigureStatus();
        std::cout << figureName << ":" << std::endl;
        std::cout << figureStatus << std::endl;
        std::cout << "Количество сторон: " << numEdges << std::endl;
        std::cout << "Стороны:" << " a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы:" << " A=" << A << " B=" << B << " C=" << C << std::endl;
        std::cout << std::endl;
    };
};

class RghtAngTriangle : public Triangle {
public:
    RghtAngTriangle() : Triangle() {
        figureName = "Прямоугольный треугольник";
        a = 10; b = 50; c = 40;
        A = 40; B = 50; C = 90;
    };
    bool CheckFigureStatus() override {
        unsigned int A1, B1, C1;
        A1 = this->A;
        B1 = this->B;
        C1 = this->C;

        if ((((A1 + B1 + C1) == 180) && ((A1 == 90) || (B1 == 90) || (C1 == 90))) == true)
        {
            this->figureStatus = "Правильная";
        }
        else {
            this->figureStatus = "Неправильная";
        }
        return 0;
    };

    void PrintInfoFigure() override {
        CheckFigureStatus();
        std::cout << figureName << ":" << std::endl;
        std::cout << figureStatus << std::endl;
        std::cout << "Количество сторон: " << numEdges << std::endl;
        std::cout << "Стороны:" << " a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы:" << " A=" << A << " B=" << B << " C=" << C << std::endl;
        std::cout << std::endl;
    };
};

class IssSidTriangle : public Triangle {
public:
    IssSidTriangle() : Triangle() {
        figureName = "Равнобедренный треугольник";
        a = 50; b = 50; c = 40;
        A = 45; B = 45; C = 90;
    };
    bool CheckFigureStatus() override {
        double a1, b1, c1;
        a1 = this->a;
        b1 = this->b;
        c1 = this->c;
        unsigned int A1, B1, C1;
        A1 = this->A;
        B1 = this->B;
        C1 = this->C;

        if ((((A1 + B1 + C1) == 180) && ((a1 == b1) && (A1 == B1))) == true)
        {
            this->figureStatus = "Правильная";
        }
        else {
            this->figureStatus = "Неправильная";
        }
        return 0;
    };
};

class EqSidTriangle : public Triangle {
public:
    EqSidTriangle() : Triangle() {
        figureName = "Равносторонний треугольник";
        a = 50; b = 50; c = 50;
        A = 60; B = 60; C = 60;
    };
    bool CheckFigureStatus() override {
        double a1, b1, c1;
        a1 = this->a;
        b1 = this->b;
        c1 = this->c;
        unsigned int A1, B1, C1;
        A1 = this->A;
        B1 = this->B;
        C1 = this->C;

        if ((((A1 + B1 + C1) == 180) && ((a1 == b1) && (b1 == c1)) && ((A1 == B1) && (B1 == C1))) == true)
        {
            this->figureStatus = "Правильная";
        }
        else {
            this->figureStatus = "Неправильная";
        }
        return 0;
    };

    void PrintInfoFigure() override {
        CheckFigureStatus();
        std::cout << figureName << ":" << std::endl;
        std::cout << figureStatus << std::endl;
        std::cout << "Количество сторон: " << numEdges << std::endl;
        std::cout << "Стороны:" << " a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы:" << " A=" << A << " B=" << B << " C=" << C << std::endl;
        std::cout << std::endl;
    };
};

class Quadrilateral : public Figures {
protected:
    double a, b, c, d; //Стороны
    unsigned int A, B, C, D; //Углы
public:
    Quadrilateral() : Figures() {
        numEdges = 4; figureName = "Четерехугольник", figureStatus = "Неизвестная";
        a = 10; b = 20; c = 30; d = 100;
        A = 10; B = 20; C = 30; D = 300;
    };
    bool CheckFigureStatus() override {
        unsigned int A1, B1, C1, D1;
        A1 = this->A;
        B1 = this->B;
        C1 = this->C;
        D1 = this->D;

        if ((A1 + B1 + C1 + D1) == 360) {
            this->figureStatus = "Правильная";
        }
        else {
            this->figureStatus = "Неправильная";
        }
        return 0;
    };
    void PrintInfoFigure() override {
        CheckFigureStatus();
        std::cout << figureName << ":" << std::endl;
        std::cout << figureStatus << std::endl;
        std::cout << "Количество сторон: " << numEdges << std::endl;
        std::cout << "Стороны:" << " a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы:" << " A=" << A << " B=" << B << " C=" << C << "D=" << D << std::endl;
        std::cout << std::endl;
    };
};


class Rectangle_ : public Quadrilateral {
protected:
    double a, b, c, d; //Стороны
    unsigned int A, B, C, D; //Углы
public:
    Rectangle_() : Quadrilateral() {
        numEdges = 4; figureName = "Прямоугольник", figureStatus = "Неизвестная";
        a = 20; b = 30; c = 20; d = 30;
        A = 90; B = 90; C = 90; D = 90;
    };
    bool CheckFigureStatus() override {
        double a1, b1, c1, d1;
        a1 = this->a;
        b1 = this->b;
        c1 = this->c;
        d1 = this->d;
        unsigned int A1, B1, C1, D1;
        A1 = this->A;
        B1 = this->B;
        C1 = this->C;
        D1 = this->D;

        if ((((A1 + B1 + C1 + D1) == 360) && ((a1 == c1) && (b1 == d1)) && ((A1 == 90) && (B1 == 90) && (C1 == 90) && (D1 == 90))) == true) {
            this->figureStatus = "Правильная";
        }
        else {
            this->figureStatus = "Неправильная";
        }
        return 0;
    };
    void PrintInfoFigure() override {
        CheckFigureStatus();
        std::cout << figureName << ":" << std::endl;
        std::cout << figureStatus << std::endl;
        std::cout << "Количество сторон: " << numEdges << std::endl;
        std::cout << "Стороны:" << " a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы:" << " A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
        std::cout << std::endl;
    };
};

class Square : public Quadrilateral {
protected:
    double a, b, c, d; //Стороны
    unsigned int A, B, C, D; //Углы
public:
    Square() : Quadrilateral() {
        numEdges = 4; figureName = "Квадрат", figureStatus = "Неизвестная";
        a = 30; b = 30; c = 30; d = 30;
        A = 90; B = 90; C = 90; D = 90;
    };
    bool CheckFigureStatus() override {
        double a1, b1, c1, d1;
        a1 = this->a;
        b1 = this->b;
        c1 = this->c;
        d1 = this->d;
        unsigned int A1, B1, C1, D1;
        A1 = this->A;
        B1 = this->B;
        C1 = this->C;
        D1 = this->D;

        if ((((A1 + B1 + C1 + D1) == 360) &&
            ((a1 == b1) && (b1 == c1) && (c1 == d1) && (d1 == a1)) &&
            ((A1 == 90) && (B1 == 90) && (C1 == 90) && (D1 == 90))) == true) {
            this->figureStatus = "Правильная";
        }
        else {
            this->figureStatus = "Неправильная";
        }
        return 0;
    };
    void PrintInfoFigure() override {
        CheckFigureStatus();
        std::cout << figureName << ":" << std::endl;
        std::cout << figureStatus << std::endl;
        std::cout << "Количество сторон: " << numEdges << std::endl;
        std::cout << "Стороны:" << " a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы:" << " A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
        std::cout << std::endl;
    };
};

class Parallgramm : public Quadrilateral {
protected:
    double a, b, c, d; //Стороны
    unsigned int A, B, C, D; //Углы
public:
    Parallgramm() : Quadrilateral() {
        numEdges = 4; figureName = "Параллелограмм", figureStatus = "Неизвестная";
        a = 20; b = 30; c = 20; d = 30;
        A = 60; B = 120; C = 60; D = 120;
    };
    bool CheckFigureStatus() override {
        double a1, b1, c1, d1;
        a1 = this->a;
        b1 = this->b;
        c1 = this->c;
        d1 = this->d;
        unsigned int A1, B1, C1, D1;
        A1 = this->A;
        B1 = this->B;
        C1 = this->C;
        D1 = this->D;

        if ((((A1 + B1 + C1 + D1) == 360) &&
            ((a1 == c1) && (b1 == d1)) &&
            ((A1 == C1) && (B1 == D1))) == true) {
            this->figureStatus = "Правильная";
        }
        else {
            this->figureStatus = "Неправильная";
        }
        return 0;
    };
    void PrintInfoFigure() override {
        CheckFigureStatus();
        std::cout << figureName << ":" << std::endl;
        std::cout << figureStatus << std::endl;
        std::cout << "Количество сторон: " << numEdges << std::endl;
        std::cout << "Стороны:" << " a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы:" << " A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
        std::cout << std::endl;
    };
};

class Rhomb : public Quadrilateral {
protected:
    double a, b, c, d; //Стороны
    unsigned int A, B, C, D; //Углы
public:
    Rhomb() : Quadrilateral() {
        numEdges = 4; figureName = "Ромб", figureStatus = "Неизвестная";
        a = 30; b = 30; c = 30; d = 30;
        A = 60; B = 120; C = 60; D = 120;
    };
    bool CheckFigureStatus() override {
        double a1, b1, c1, d1;
        a1 = this->a;
        b1 = this->b;
        c1 = this->c;
        d1 = this->d;
        unsigned int A1, B1, C1, D1;
        A1 = this->A;
        B1 = this->B;
        C1 = this->C;
        D1 = this->D;

        if ((((A1 + B1 + C1 + D1) == 360) &&
            ((a1 == b1) && (b1 == c1) && (c1 == d1) && (d1 == a1)) &&
            ((A1 == C1) && (B1 == D1))) == true) {
            this->figureStatus = "Правильная";
        }
        else {
            this->figureStatus = "Неправильная";
        }
        return 0;
    };
    void PrintInfoFigure() override {
        CheckFigureStatus();
        std::cout << figureName << ":" << std::endl;
        std::cout << figureStatus << std::endl;
        std::cout << "Количество сторон: " << numEdges << std::endl;
        std::cout << "Стороны:" << " a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы:" << " A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
        std::cout << std::endl;
    };
};


// Функция вывода: принимает указатель на базовый класс Figure
void print_info(Figures* fig) {
    if (fig) {
        // fig->CheckFigureStatus();
        fig->PrintInfoFigure();
    }
    else {
        std::cout << "Указатель на фигуру равен nullptr.\n";
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Triangle T0{};
    print_info(&T0);

    RghtAngTriangle T1{};
    print_info(&T1);

    IssSidTriangle T2{};
    print_info(&T2);

    EqSidTriangle T3{};
    print_info(&T3);

    Quadrilateral T4{};
    print_info(&T4);

    Rectangle_ T5{}; 
    print_info(&T5);

    Square T6{}; 
    print_info(&T6);

    Parallgramm T7{};
    print_info(&T7);

    Rhomb T8{};
    print_info(&T8);
}