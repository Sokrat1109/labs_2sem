// laba2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include "Square.h"



int main()
{

    float a;
    std::cout << " write a : ";
    std::cin >> a;
    Square sq;
    sq.setA(a);
    
    std::cout << "s = " << sq.s() << "; ";  // площадь
    std::cout << "p = " << sq.per() << "; ";   // периметр
    std::cout << "d = " << sq.d() << "; ";  // диагональ
}
