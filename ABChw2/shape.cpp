//------------------------------------------------------------------------------
// shape.cpp - содержит процедуры связанные с обработкой обобщенной фигуры
// и создания произвольной фигуры
//------------------------------------------------------------------------------

#include <fstream>
#include "shape.h"
#include "sphere.h"
#include "tetrahedron.h"
#include "parallelepiped.h"

//------------------------------------------------------------------------------
// Ввод параметров обобщенной фигуры из файла
shape* In(std::ifstream &ifst) {
    shape *sp;
    int k;
    ifst >> k;
    switch(k) {
        case 1:
            sp = new sphere;
            sp->k = shape::SPHERE;
            In(reinterpret_cast<sphere &>(sp), ifst);
            return sp;
        case 2:
            sp = new parallelepiped;
            sp->k = shape::PARALLELEPIPED;
            In(reinterpret_cast<parallelepiped &>(sp), ifst);
            return sp;
        case 3:
            sp = new tetrahedron;
            sp->k = shape::TETRAHEDRON;
            In(reinterpret_cast<tetrahedron &>(sp), ifst);
            return sp;
        default:
            return 0;
    }
}

//------------------------------------------------------------------------------
// Случайный ввод обобщенной фигуры
shape *InRnd() {
    shape *sp;
    auto k = rand() % 3 + 1;
    switch(k) {
        case 1:
            sp = new sphere;
            sp->k = shape::SPHERE;
            InRnd(reinterpret_cast<sphere &>(sp));
            return sp;
        case 2:
            sp = new parallelepiped;
            sp->k = shape::PARALLELEPIPED;
            InRnd(reinterpret_cast<parallelepiped &>(sp));
            return sp;
        case 3:
            sp = new tetrahedron;
            sp->k = shape::TETRAHEDRON;
            InRnd(reinterpret_cast<tetrahedron &>(sp));
            return sp;
        default:
            return 0;
    }
}

//------------------------------------------------------------------------------
// Вывод параметров текущей фигуры в поток
void Out(shape &s, std::ofstream &ofst) {
    switch(s.k) {
        case shape::SPHERE:
            Out(s, ofst);
            break;
        case shape::PARALLELEPIPED:
            Out(s, ofst);
            break;
        case shape::TETRAHEDRON:
            Out(s, ofst);
            break;
        default:
            ofst << "Incorrect figure!" << std::endl;
    }
}

//------------------------------------------------------------------------------
// Вычисление периметра фигуры
double Volume(shape &t) {
    switch(t.k) {
        case shape::SPHERE:
            return Volume(t);
        case shape::PARALLELEPIPED:
            return Volume(t);
        case shape::TETRAHEDRON:
            return Volume(t);
        default:
            return 0.0;
    }
}
