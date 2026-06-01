#include <Windows.h>
#include <stdlib.h>

#include <iostream>
#include <fstream>
#include <cstdlib>

int** createArray(int rows, int cols);
void memoryClear(int** inpArray, int rows, int cols);
void viewGameField(int** inpArr, int rows, int cols);

int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);


	std::ofstream outFile("initFile.txt");
	int fieldSizeI{ 20 }, fieldSizeJ{ 30 };
	
	outFile << fieldSizeI << " " << fieldSizeJ << std::endl;
	/*
	outFile << 2 << " " << 3 << std::endl;
	outFile << 2 << " " << 4 << std::endl;
	outFile << 3 << " " << 4 << std::endl;
	outFile << 3 << " " << 5 << std::endl;
	outFile << 3 << " " << 6 << std::endl;
	outFile << 3 << " " << 7 << std::endl;
	outFile << 5 << " " << 0 << std::endl;
	outFile << 5 << " " << 1 << std::endl;
	outFile << 5 << " " << 2 << std::endl;
	outFile << 6 << " " << 2 << std::endl;
	outFile.close();
	*/
	outFile.close();

	int rows{}, cols{};

	std::ifstream inpFile("initFile.txt");
	inpFile >> rows;
	inpFile >> cols;
	int** gameFieldPrev = createArray(rows, cols);
	int** gameFieldNext = createArray(rows, cols);
	
	int I{-1}, J{-1};
	while (!inpFile.eof()) {
		inpFile >> I; 
		inpFile >> J;
		if (I < 0 || J < 0) {
			break;
		}
		gameFieldNext[I][J] = 1;
	}
	inpFile.close();

	std::cout << "Созданное поле" << std::endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			std::cout << gameFieldNext[i][j] << " ";
		}
		std::cout << std::endl;
	}

	/*
	//Случайное заполнение
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			gameFieldNext[i][j] = rand() % 2;
		}
	}
	*/

	

	int numGeneration = 1;
	int numCells{};
	int numLifeCells{}, numLifeCellsPrev{};
	int g_calcCurrPosCells{ };
	
	//Начало игры
	do {
		std::cout << std::endl;
		for (int i5 = 0; i5 < rows; i5++) {
			for (int j5 = 0; j5 < cols; j5++) {
				gameFieldPrev[i5][j5] = gameFieldNext[i5][j5];
			}
		}

		numLifeCellsPrev = 0;
		for (int i4 = 0; i4 < rows; i4++) {
			for (int j4 = 0; j4 < cols; j4++) {
				if (gameFieldPrev[i4][j4] == 1) {
					numLifeCellsPrev += 1;
				}
			}
		}
		
		viewGameField(gameFieldPrev, rows, cols);
		std::cout << "Поколение: " << numGeneration << ". " << "Число живых клеток: " << numLifeCellsPrev << std::endl;


		numLifeCells = 0;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				//Считаем число клеток
				numCells = 0;
				for (int i1 = i - 1; i1 <= i + 1; i1++) {
					for (int j1 = j - 1; j1 <= j + 1; j1++) {
						if ((i1 < 0 || j1 < 0 || i1 > rows-1 || j1 > cols-1 || (i1 == i && j1 == j))) {
							continue;
						}
						else {
							if (gameFieldPrev[i1][j1] == 1) {
								numCells += 1;
							}
						}
					}
				}

				if ((gameFieldPrev[i][j] == 0) && (numCells == 3)) {
					gameFieldNext[i][j] = 1;
					numLifeCells += 1;
				}
				else if ((gameFieldPrev[i][j] == 1) && (numCells == 3 || numCells == 2)) {
					gameFieldNext[i][j] = 1;
					numLifeCells += 1;;
				}
				else if ((gameFieldPrev[i][j] == 1) && (numCells > 3 || numCells < 2)) {
					gameFieldNext[i][j] = 0;
				}
			}
		}

		g_calcCurrPosCells = 0;
		for (int i8 = 0; i8 < rows; i8++) {
			for (int j8 = 0; j8 < cols; j8++) {
				if ((gameFieldNext[i8][j8] == 1) && ( gameFieldPrev[i8][j8]) == 1) {
					g_calcCurrPosCells++;
				}
			}
		}
	
		numGeneration += 1;

		//Проверка условия выполнения игры
		if (numLifeCells == 0) {
			Sleep(3000);
			//system("CLS");
			viewGameField(gameFieldNext, rows, cols);
			std::cout << "Поколение: " << numGeneration << ". " << "Число живых клеток: " << numLifeCells << std::endl;
			std::cout << "Все клетки угасли. " << "Игра окончена" << std::endl;
		}
		else if ((numLifeCellsPrev == numLifeCells) && (g_calcCurrPosCells == numLifeCellsPrev)) {
				Sleep(3000);
				//system("CLS");
				viewGameField(gameFieldNext, rows, cols);
				std::cout << "Поколение: " << numGeneration << ". " << "Число живых клеток: " << numLifeCells << std::endl;
				std::cout << "Сложилась стабильная жизненная система. " << "Игра окончена" << std::endl;
				break;
		}
		


		//Sleep(3000);
		//system("CLS");
	} 
	while (numLifeCells != 0);

	//Очистка памяти
	memoryClear(gameFieldPrev, rows, cols);
	memoryClear(gameFieldNext, rows, cols);
}

//-----------------------------------------------------------------------------------------------------------------------------------------------------------------
//Функции
int** createArray(int rows, int cols) {

	int** crtArr = new int* [rows] {};
	for (int i = 0; i < rows; i++) {
		crtArr[i] = new int[cols] {};
	}
	return crtArr;
};

void viewGameField(int** inpArr, int rows, int cols) {
	for (int i2 = 0; i2 < rows; i2++) {
		for (int j2 = 0; j2 < cols; j2++) {
			if (inpArr[i2][j2] == 0) {
				std::cout << "-" << " ";
			}
			else {
				std::cout << "*" << " ";
			};
		}
		std::cout << std::endl;
	}
};

void memoryClear(int** inpArray, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		delete[] inpArray[i];
	}
	delete[] inpArray;
}