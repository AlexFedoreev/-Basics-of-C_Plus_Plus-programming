#include <iostream>

#include <Windows.h>

void reverse(int* inpArr, int size);

int main(int argc, char** argv) {
    SetConsoleOutputCP(CP_UTF8);

    const int size1{ 9 };
    int inpArr1[size1] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << std::endl;
    std::cout << "Массив до вызова функции reverse: ";
    for (int i = 0; i < size1; i++) {
        std::cout << inpArr1[i] << " ";
    }

    reverse(inpArr1, size1);
} 

void reverse(int* inpArr, int size) {
    int a{};
    for (int i = 0 ; i < size/2; ++i) {
        a = inpArr[i];
        inpArr[i] = inpArr[size - i - 1];
        inpArr[size - i - 1] = a;
    }
    std::cout << std::endl;
    std::cout << "Массив после функции reverse: ";
    for (int j = 0; j < size; ++j) {
        std::cout << inpArr[j] << " ";
    }
};