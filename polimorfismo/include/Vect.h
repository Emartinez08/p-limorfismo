#ifndef VECT_H
#define VECT_H
#include "Fraccion.h"

class Vect:public Fraccion
{
    public:
    Vect();
    Vect(int);
    Vect(int, Fraccion *);
    int get_size();
    Fraccion get_fraccion(int);
    void set_fraccion(int, Fraccion);
    void agregar_fraccion(Fraccion);
    void imprimir();
    Vect operator +(const Vect &f2);
    Vect operator -(const Vect &f2);
    Fraccion operator *(const Vect &f2);
    Fraccion pp(Vect);
    Vect producto(Vect);
    float magnitud();
    float angulo(Vect);
    Vect producto(int);

    protected:

    private:
    Fraccion * arr;
    int sizes;
    int sizeMem;
};

#endif // VECT_H
