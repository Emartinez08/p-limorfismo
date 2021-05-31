#ifndef FRACCION_H
#define FRACCION_H
#include <iostream>
using namespace std;
class fraccion
{
    public:
        fraccion();
        fraccion(int, int);
        void reduccion(int &,int &);
        fraccion suma(fraccion);
        fraccion multiplicacion(fraccion);
        void imprimir();
        int getNumerador();
        int getDenominador();
        void setNumerador(int);
        void setDenominador(int);

    protected:

    private:
        int numerador;
        int denominador;
};
fraccion::fraccion(){
    numerador = 0;
    denominador = 1;
}
fraccion::fraccion(int num, int den){
    if(den == 0)
        den = 1;
    // ambos negativos o unicamente denominador negativo, entonces cambio signo en ambos
    // La expresion completa sería den < 0 && num < 0 || num > 0 && den < 0
    // Sin embargo, tienen en comun que si el denominador es negativo, cambio el signo en ambos
    if(den < 0 ){
        num = -num;
        den = -den;
    }
    reduccion(num,den);
    numerador = num;
    denominador = den;
}

void fraccion::reduccion(int &num, int &den){
    // Variables auxiliares
    int limit = 0;
    int signo1 = 1;
    int signo2 = 1;
    // Guarda el signo en las variables signoX y deja num y den sin signo.
    // Esto se hace para que las operaciones modulo y limite esten correctas logicamente
    if(num < 0){
        signo1 = -1;
        num = num*signo1;
    }
    if(den < 0){
        signo2 = -1;
        den = den*signo2;
    }
    // La variable limite es la menor entre el denominador y el numerador
    // Sirve como criterio de parada al identificar un posible maximo comun divisor.
    if(num >= den)
        limit = den;
    else
        limit = num;
    int it = 2;
    while(it<=limit){
        if(num % it == 0 && den % it == 0){
            num = num/it;
            den = den/it;
        }else{
            it++;
        }
    }
    // Devolvemos los signos del numerador y denominador (en caso de que exista cambio)
    num = num*signo1;
    den = den*signo2;
}

fraccion fraccion::suma(fraccion farg){
    int num = numerador * farg.getDenominador() +  denominador * farg.getNumerador();
    int den = denominador * farg.getDenominador();
    fraccion fresultado(num,den);
    return fresultado;
}

fraccion fraccion::multiplicacion(fraccion farg){
    int num = numerador * farg.getNumerador();
    int den = denominador * farg.getDenominador();
    fraccion fresultado(num,den);
    return fresultado;
}

void fraccion::imprimir(){
    cout << numerador << "/" << denominador << endl;
}

int fraccion::getNumerador(){return numerador;}
int fraccion::getDenominador(){return denominador;}
void fraccion::setNumerador(int num){
    this->numerador = num;
    //cout << "nuevo numerador" << this->numerador << endl;
    }
void fraccion::setDenominador(int den){denominador = den;}

#endif // FRACCION_H
