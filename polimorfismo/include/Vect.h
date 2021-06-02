#ifndef VECT_H
#define VECT_H
#include "Fraccion.h"

class Vect
{
    public:
    Vect();
    Vect(int);
    Vect(int, Fraccion *);
    int get_size();
    //Vect suma(Vect vec);
    //void sumaInPlace(Arrfrac inaArrfrac);
    //Vect multiplicacion(Arrfrac inaArrfrac);
    Fraccion get_fraccion(int);
    void set_fraccion(int, Fraccion);
    void agregar_fraccion(Fraccion);
    //void eliminarFraccion(); // ultimo elemento
    void imprimir();
    Vect operator +(const Vect &f2);

    protected:

    private:
    Fraccion * arr;
    int sizes;
    int sizeMem;
};

#endif // VECT_H
