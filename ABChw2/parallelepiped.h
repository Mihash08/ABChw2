//------------------------------------------------------------------------------
// parallelepiped.h - содержит описание прямоугольника  и его интерфейса
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

# include "rnd.h"
#include "shape.h"

// параллелепипед
struct parallelepiped : public shape{
    double density;
    int a, b, c; // три ребра
};

//------------------------------------------------------------------------------
// Ввод параметров паралл-да из файла
void In(parallelepiped &p, ifstream &ifst);

//------------------------------------------------------------------------------
// Случайный ввод параметров паралл-да
void InRnd(parallelepiped &p);

//------------------------------------------------------------------------------
// Вывод параметров паралл-да в форматируемый поток
void Out(parallelepiped &p, ofstream &ofst);

//------------------------------------------------------------------------------
// Вычисление объема паралл-да
double Volume(parallelepiped &p);
