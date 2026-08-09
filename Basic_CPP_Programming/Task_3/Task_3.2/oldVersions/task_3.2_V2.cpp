#include <Windows.h>

#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

class Address {
private:
	std::string cityName;
	std::string streetName;
	int houseNumber;
	int flatNumber;
public:
	Address(std::string cName, std::string sName, int hNumber, int fNumber) :
		cityName(cName),
		streetName(sName),
		houseNumber(hNumber),
		flatNumber(fNumber) {
	}
	Address()
	{
		cityName = "Unknown";
		streetName = "Unknown";
		houseNumber = 0;
		flatNumber = 0;
	}

	bool operator<(const Address& other) const {
		return std::less<std::string>()(cityName, other.cityName);
	}

	std::string getCityName() {
		return cityName; // Присваиваем значение названия города
	}

	std::string getStreetName() {
		return streetName; // Присваиваем значение названия города
	}

	int getHouseNumber() {
		return houseNumber; // Присваиваем значение названия города
	}

	int getFlatNumber() {
		return flatNumber; // Присваиваем значение названия города
	}

	void setCityName(std::string value) {
		cityName = value; // Присваиваем значение названия города
	}

	void setStreetName(std::string value) {
		streetName = value; // Присваиваем значение названия улицы
	}

	void setHouseNumber(int value) {
		houseNumber = value; // Присваиваем значение номера дома
	}

	void setFlatNumber(int value) {
		flatNumber = value; // Присваиваем значение номера квартиры
	}



	void get_address() {
		std::cout << cityName << ", " << streetName << ", " << houseNumber << ", " << flatNumber << std::endl;
	}
};

int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	//Чтение с файла
	int i{}, f{}, j{};
	std::string ctName;
	std::string strName;
	int hsNumber;
	int ftNumber;

	std::ifstream inp1File{ "C:/Users/Alex/source/repos/Basics_of_C_Plus_Plus_programming/Basic of programming on CPlusPlus/Task_3/task_3.2/in.txt" };
	inp1File >> f;
	std::cout << f << std::endl;
	Address* arrAddress = new Address[f];
	while (!inp1File.eof()) {
		for (int i = 0; i < f; i++) { //Запись в массив
			inp1File >> ctName;
			inp1File >> strName;
			inp1File >> hsNumber;
			inp1File >> ftNumber;

			arrAddress[i].setCityName(ctName);
			arrAddress[i].setStreetName(strName);
			arrAddress[i].setHouseNumber(hsNumber);
			arrAddress[i].setFlatNumber(ftNumber);
		}
	}
	inp1File.close();

	
	std::sort(arrAddress, arrAddress+f); //Сортировка

	for (int j = 0; j < f; j++) {
		arrAddress[j].get_address();
	}

	//Запись в файл
	std::cout << std::endl;
	std::ofstream outFile{ "C:/Users/Alex/source/repos/Basics_of_C_Plus_Plus_programming/Basic of programming on CPlusPlus/Task_3/task_3.2/out.txt" };
	outFile << f << "\n";
	for (int k = 0; k < f; k++) {
		outFile << arrAddress[k].getCityName() << ", " << arrAddress[k].getStreetName() << ", " << arrAddress[k].getHouseNumber() << ", " << arrAddress[k].getFlatNumber() << std::endl;
	}
	outFile.close();

	delete[] arrAddress; //Очистка памяти
	arrAddress = nullptr;
}