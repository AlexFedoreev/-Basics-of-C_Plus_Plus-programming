#include <Windows.h>

#include <iostream>

int main() {
    SetConcSetConsoleOutputCP(CP_UTF8);
    std::cout << "Алексей\n";
    std::cout << 26 << "\n";
}