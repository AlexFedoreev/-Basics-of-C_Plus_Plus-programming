#include <windows.h>

#include <iostream>
#include <stdexcept> 


class Calculator {
private:
    double num1, num2; // Поля хранения чисел

public:
    // Конструктор для инициализации полей
    Calculator(double val1 = 0, double val2 = 0) : num1(val1), num2(val2) {}

    // Методы для выполнения операций
    double add() const {
        return num1 + num2;
    }
    
        double multiply() const {
        return num1 * num2;
    }

    double subtract_1_2() const {
        return num1 - num2;
    }

    double subtract_2_1() const {
        return num2 - num1;
    }

    double divide_1_2() const {
        if (num2 == 0) {
            throw std::invalid_argument("Деление на ноль невозможно");
        }
        return num1 / num2;
    }

    double divide_2_1() const {
        if (num1 == 0) {
            throw std::invalid_argument("Деление на ноль невозможно");
        }
        return num2 / num1;
    }

    bool set_num1(double val1) {
        if (val1 == 0) {
            return false; 
        }
        num1 = val1;
        return true;
    }

    bool set_num2(double val2) {
        if (val2 == 0) {
            return false; 
        }
        num2 = val2;
        return true;
    }
};

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int i = 1;
    while (i == 1) {
        double num1{}, num2{};
        std::cout << "Введите Num1: " << std::endl;
        std::cin >> num1;
        std::cout << "Введите Num2: " << std::endl;
        std::cin >> num2;

        Calculator calc(num1, num2);

        try {
            std::cout << "num1 + num2 = " << calc.add() << std::endl;
            std::cout << "num1 - num2 = " << calc.subtract_1_2() << std::endl;
            std::cout << "num2 - num1 = " << calc.subtract_2_1() << std::endl;
            std::cout << "num1 * num2 = " << calc.multiply() << std::endl;
            std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
            std::cout << "num2 / num1 = " << calc.divide_2_1() << std::endl;
        }
        catch (const std::invalid_argument& e) {
            std::cerr << "Ошибка: " << e.what() << std::endl;
        }
        std::cout << std::endl;
    }
}