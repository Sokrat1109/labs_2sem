#include "Square.h"

Square::Square() {  // ���� �� ���������. �����������
    a = 0;
}
Square::Square(float a_) {
    a = a_;
}
void Square::setA(float a_) {  // ����� ��������������
    a = a_;
}
float Square::getA() {
    return a;
}
float Square::per() {  // ��������
    return a * 4;
}
float Square::d() {  // ���������
    return a * pow(2, 0.5);
}
float Square::s() {  // �������
    return a * a;
}
Square::~Square() {  // ����������
}