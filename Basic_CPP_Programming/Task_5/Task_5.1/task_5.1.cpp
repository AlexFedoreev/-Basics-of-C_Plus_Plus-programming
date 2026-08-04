#include "funcCalculator_h.h"

#include <Windows.h>

#include <iostream>
#include <string>
#include <fstream>
#include <unordered_map>
#include <cmath>



int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double num1{}, num2{};
    std::string opsign;
    std::cout << "Введите первое число" << std::endl;
    std::cin >> num1;
    std::cout << "Введите второе число" << std::endl;
    std::cin >> num2;
    std::cout << "Введите знак операции (+, -, *, ÷, ^) " << std::endl;
    std::cin >> opsign;

    Calculator(num1,num2,opsign);

}
