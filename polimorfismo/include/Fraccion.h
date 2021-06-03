#ifndef FRACCION_H
#define FRACCION_H


class Fraccion
{
    private:
    int numerador;
    int denominador;

    public:
    Fraccion();
    Fraccion(int, int);
    void reduccion(int &,int &);
    void imprimir();
    int get_numerador();
    int get_denominador();
    void set_numerador(int);
    void set_denominador(int);
    void print();
    Fraccion suma(Fraccion);
    Fraccion resta(Fraccion);
    Fraccion multiplicacion(Fraccion);
    Fraccion operator +(const Fraccion &farg);
    Fraccion operator -(const Fraccion &farg);
    Fraccion operator *(const Fraccion &farg);
   // float operator /(const Fraccion &farg);
};

#endif // FRACCION_H
