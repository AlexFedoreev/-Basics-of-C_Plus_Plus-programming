#include <Windows.h>

#include <iostream>
#include <string>
#include <map>



int main() {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	int digFmod{}, digFdiv{}, digSmod{}, digSdiv{};


	std::cout << "Введите  первое число:" << std::endl;
	int fNum{};
	std::cin >> fNum;

	std::cout << "Введите  второе число:" << std::endl;
	int sNum{};
	std::cin >> sNum;

	std::string operNum{}, signFNum{}, signSNum{};
	std::string V11{}, V12{}, V21{}, V22{};


	std::map < int, std::string>modValue = {
	  { 0, "ноль"},
	  { 1, "один"},
	  { 2 ,"два"},
	  { 3 ,"три"},
	  { 4 ,"четыре"},
	  { 5 ,"пять"},
	  { 6 ,"шесть"},
	  { 7 ,"семь"},
	  { 8 ,"восемь"},
	  { 9 ,"девять"},
	};

	std::map < int, std::string> modValue1 = {
	  { 0, "десять"},
	  { 1, "одиннадцать"},
	  { 2 ,"двенадцать"},
	  { 3 ,"тринадцать"},
	  { 4 ,"четырнадцать"},
	  { 5 ,"пятнадцать"},
	  { 6 ,"шестнадцать"},
	  { 7 ,"семнадцать"},
	  { 8 ,"восемнадцать"},
	  { 9 ,"девятнадцать"},
	};

	std::map < int, std::string> divValue = {
	   { 2 ,"двадцать"},
	   { 3 ,"тридцать"},
	   { 4 ,"сорок"},
	   { 5 ,"пятьдесят"},
	   { 6 ,"шестьдесят"},
	   { 7 ,"семьдесят"},
	   { 8 ,"восемьдесят"},
	   { 9 ,"девяносто"},
	   { 10 ,"сто"},
	};


	if (((fNum >= -100 && fNum <= 100) && (sNum >= -100 && sNum <= 100))== true) 
	{
		digFmod = abs(fNum) % 10;
		digFdiv = abs(fNum) / 10;
		digSmod = abs(sNum) % 10;
		digSdiv = abs(sNum) / 10;


		if (fNum < 0) {
			signFNum = "минус";
		};
		if (sNum < 0) {
			signSNum = "минус";
		};

		if (fNum > sNum) {
			operNum = "больше, чем";
		}
		else if (fNum < sNum) {
			operNum = "меньше, чем";
		}
		else if (fNum == sNum) {
			operNum = "равно";
		}




		//Текстовое название первого числа
		if (digFdiv == 0) {
			V12 = modValue[digFmod]; 
		}
		else if (digFdiv == 1) {
			V12 = modValue1[digFmod];
		}
		else if (digFdiv > 1) {
			V11 = divValue[digFdiv];
			if (digFmod == 0) {
				V12 = {};
			}
			else {
				V12 = modValue[digFmod];
			}
		}
		//Текстовое название второго числа
		if (digSdiv == 0) {
			V22 = modValue[digSmod];
		}
		else if (digSdiv == 1) {
			V22 = modValue1[digSmod];
		}
		else if (digSdiv > 1) {
			V21 = divValue[digSdiv];
			if (digSmod == 0) {
				V22 = {};
			}
			else {
				V22 = modValue[digSmod];
			}
		}
	
	 std::cout << V22 << " " << V21 << std::endl;
	 std::cout << signFNum << " " << V11 << " " << V12 << " " << operNum << " " << signSNum << " "  << V21 << " " << V22 << std::endl;
	}
	else {
		std::cout << "Одно из чисел не принадлежит промежутку";
	}

}