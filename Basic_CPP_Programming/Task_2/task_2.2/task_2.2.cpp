#include <Windows.h>

#include <iostream>
#include <cstdlib>

class Counter {
private:
    int counterVal;

public:

    Counter() : counterVal(1) {}
    Counter(int initValue) : counterVal(initValue) {
    }

    // Метод для увеличения значения на 1
    void increase() {
        counterVal++;
    }

    // Метод для уменьшения значения на 1
    void decrease() {
        counterVal--;
    }

    // Метод для получения текущего значения
    int getValue() const {
        return counterVal;
    }

    // Метод для завершения программы
    void exitapp() const {
        exit(1);
    }
};


int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string ans{};
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет :" << std::endl;
    std::cin >> ans;
   
    Counter c1;
 
    if (ans == "Да") {
        int inpC{};
        std::cout << "Введите начальное значение счётчика:" << std::endl;
        std::cin >> inpC;
       Counter c1(inpC);
    }
    else {
        Counter c1(1);
    }

    int i = 1;
    while (i == 1) {

        char inputV1{};
        std::cout << "Введите команду ('+', '-', '=' или 'x'):" << std::endl;
        std::cin >> inputV1;

        if (inputV1 == '+') {
            c1.increase();
            std::cout << "Значение счётчика увеличено" << std::endl;
        }

        else if (inputV1 == '-') {
            c1.decrease();
            std::cout << "Значение счётчика уменьшено" << std::endl;
        }

        else if (inputV1 == '=') {
            std::cout << "Значение: " << c1.getValue() << std::endl; // Выводим c1
        }

        else if (inputV1 == 'x') {
            std::cout << "До свидания!" << std::endl;
            c1.exitapp();
        }
        else {
            std::cout << "Введена неправильная команда!" << std::endl;
        }
    }
}
