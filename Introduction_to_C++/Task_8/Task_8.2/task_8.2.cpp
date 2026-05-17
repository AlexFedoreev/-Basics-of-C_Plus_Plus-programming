#include <Windows.h>

#include <iostream>

namespace summ {
    int calc(int x, int y) {
        int result = x + y;
        std::cout << "Сложение: " << result << std::endl;
        return 1;
    }
}

namespace subst {
    int calc(int x, int y) {
        int result = x - y;
        std::cout << "Вычитание: " << result << std::endl;
        return 1;
    }
}

namespace multp {
    int calc(int x, int y) {
        int result = x * y;
        std::cout << "Умножение: " << result << std::endl;
        return 1;
    }
}

namespace divis {
    int calc(int x, int y) {
        int result = x / y;
        std::cout << "Деление: " << result << std::endl;
        return 1;
    }
}

int main(int argc, char** argv) {
    SetConsoleOutputCP(CP_UTF8);

    std::cout << std::endl;
    int x = 6, y = 9;
    std::cout << "х = " << x << ", " << "y= " << y << std::endl;
    summ::calc(x, y);
    subst::calc(x, y);
    multp::calc(x, y);
    divis::calc(x, y);
}

