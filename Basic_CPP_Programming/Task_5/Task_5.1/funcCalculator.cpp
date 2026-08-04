#include <iostream>
#include <string>
#include <fstream>
#include <unordered_map>
#include <cmath>

double Calculator(double num1, double num2, std::string opsign) {

    double result{};
    std::unordered_map<std::string, int> usedsings;
    usedsings["+"] = 1;
    usedsings["-"] = 2;
    usedsings["*"] = 3;
    usedsings["/"] = 4;
    usedsings["^"] = 5;

    int opsignNum = usedsings[opsign];
    switch (opsignNum) { //переписать нормальный вывод + возврат рещультата
    case 1:
        result = num1 + num2;
        std::cout << "Сумма чисел " << num1 << " и " << num2 << " равна: ";
        break;
    case 2:
        result = num1 - num2;
        std::cout << "Разность чисел " << num1 << " и " << num2 << " равна: ";
        break;
    case 3:
        result = num1 * num2;
        std::cout << "Произведение чисел " << num1 << " и " << num2 << " равно : ";
        break;
    case 4:
        result = num1 / num2;
        std::cout << "Деление чисел " << num1 << " и " << num2 << " равна: ";
        break;
    case 5:
        result = std::pow(num1, num2);
        std::cout << "Возведение числа " << num1 << " в степень " << num2 << " равно: ";
        break;
    default:
        std::cout << "Введён неправильный символ, результат = ";
        break;
    }

    std::cout << result;
    return result;
}