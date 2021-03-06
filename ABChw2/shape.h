#ifndef __shape__
#define __shape__

//------------------------------------------------------------------------------
// shape.h - содержит описание обобщающей геометрической фигуры,
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
// структура, обобщающая все имеющиеся фигуры
struct shape {
    double density;
    // значения ключей для каждой из фигур
    enum key {SPHERE, PARALLELEPIPED, TETRAHEDRON};
    key k; // ключ
};

// Ввод обобщенной фигуры
shape *In(std::ifstream &ifdt);

// Случайный ввод обобщенной фигуры
shape *InRnd();

// Вывод обобщенной фигуры
void Out(shape &s, std::ofstream &ofst);

// Вычисление площади обобщенной фигуры
double Volume(shape &t);

#endif
