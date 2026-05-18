#include <Windows.h>

#include <iostream>

int** create_two_dim_array(int rows, int cols);

void fill_two_dim_array(int** inputArray, int rows, int cols);

void print_two_dim_array(int** inputArray, int rows, int cols);

void delete_two_dim_array(int** inputArray, int rows, int cols);

int main() {
	SetConsoleOutputCP(CP_UTF8);

	int rows{}, cols{};
	std::cout << "Введите число строк массива: ";
	std::cin >> rows;
	std::cout << "Введите число столбцов массива: ";
	std::cin >> cols;

	int** testArray = create_two_dim_array(rows, cols);

	fill_two_dim_array(testArray, rows, cols);

	print_two_dim_array(testArray, rows, cols);

	delete_two_dim_array(testArray, rows, cols);
}


int** create_two_dim_array(int rows, int cols) {
	int** createdArray{ new int* [rows]};
	for (int i = 0; i < rows; i++) {
		createdArray[i] = new int[cols];
	}
	return createdArray;
}

void fill_two_dim_array(int** inputArray, int rows, int cols) {
	std::cout << "Таблица умножения:" << std::endl;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			inputArray[i][j] = (i+1) * (j+1);
		}
	}
}

void print_two_dim_array(int** inputArray, int rows, int cols)
{
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cout << inputArray[i][j] << "\t";
		}
		std::cout << std::endl;
	}
};

void delete_two_dim_array(int** inputArray, int rows, int cols)
{
	for (int i = 0; i < rows; i++) {
		delete[] inputArray[i];
		}
	delete[] inputArray;
};

