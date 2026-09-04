#include "classCounter_h.h"

#include <cstdlib>
   
    
    // Метод для увеличения значения на 1
    void Counter::increase() {
        counterVal++;
    }

    // Метод для уменьшения значения на 1
    void Counter::decrease() {
        counterVal--;
    }

    // Метод для получения текущего значения
    int Counter::getValue() const {
        return counterVal;
    }

    // Метод для завершения программы
    void Counter::exitApp() const {
        exit(1);
    }


