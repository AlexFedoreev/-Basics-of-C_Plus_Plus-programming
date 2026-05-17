#include <Windows.h>

#include <iostream>

void counting_function();

int main(int argc, char** argv) {
    SetConsoleOutputCP(CP_UTF8);

    std::cout << std::endl;
    for (int i = 0; i < 15; i++)
    {
        counting_function();
    }
}

void counting_function()
{
    static int countCalls{ 0 };
    countCalls += 1;
    std::cout << "Число вызовов функции counting_function(): " << countCalls << std::endl;
}