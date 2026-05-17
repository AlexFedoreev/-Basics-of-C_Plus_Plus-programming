#include <iostream>

void print(int* inpArr, int size);

int main(int argc, char** argv) {
    const int size1{ 9 }, size2{ 4 }, size3{ 5 };
    int inpArr1[size1] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int inpArr2[size2] = {6, 5, 4, 8};
    int inpArr3[size3] = {1, 4, 3, 7, 5};
    std::cout << std::endl;
    print(inpArr1,size1);
    print(inpArr2, size2);
    print(inpArr3, size3);
}

void print(int* inpArr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << inpArr[i] << " ";
    }
    std::cout << std::endl;
};