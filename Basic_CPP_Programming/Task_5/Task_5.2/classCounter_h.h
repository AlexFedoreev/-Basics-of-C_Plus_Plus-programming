#pragma once
class Counter {
private:
    int counterVal;

public:

    Counter();
    Counter(int initValue);
    // Метод для увеличения значения на 1
    void increase();

    // Метод для уменьшения значения на 1
    void decrease();

    // Метод для получения текущего значения
    int getValue() const;

    // Метод для завершения программы
    void exitApp() const;
};