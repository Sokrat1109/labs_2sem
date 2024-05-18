#include "Square.h"

Square::Square() {  // поля по умолчанию. конструктор
    a = 0;
}
Square::Square(float a_) {
    a = a_;
}
void Square::setA(float a_) {  // можно переопределить
    a = a_;
}
float Square::getA() {
    return a;
}
float Square::per() {  // периметр
    return a * 4;
}
float Square::d() {  // диагональ
    return a * pow(2, 0.5);
}
float Square::s() {  // площадь
    return a * a;
}
Square::~Square() {  // деструктор
}