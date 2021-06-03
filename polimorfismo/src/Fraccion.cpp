#include "Fraccion.h"
#include <iostream>
using namespace std;

Fraccion::Fraccion(){
    numerador = 0;
    denominador = 1;
}

Fraccion::Fraccion(int num, int den){
    if(den == 0)
        den = 1;

    if(den < 0 ){
        num = -num;
        den = -den;
    }
    reduccion(num,den);
    numerador = num;
    denominador = den;
}

void Fraccion::reduccion(int &num, int &den){
    int limit = 0;
    int signo1 = 1;
    int signo2 = 1;
    if(num < 0){
        signo1 = -1;
        num = num*signo1;
    }
    if(den < 0){
        signo2 = -1;
        den = den*signo2;
    }

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
    num = num*signo1;
    den = den*signo2;
}
int Fraccion::get_numerador(){
    return numerador;
}
int Fraccion::get_denominador(){
    return denominador;
}
void Fraccion::set_numerador(int num){
    numerador = num;
}
void Fraccion::set_denominador(int den){
    denominador = den;
}
void Fraccion::print(){
    cout << numerador << "/" << denominador << endl;
}
Fraccion Fraccion::suma(Fraccion farg){
    int num = numerador * farg.get_denominador() +  denominador * farg.get_numerador();
    int den = denominador * farg.get_denominador();
    Fraccion fresultado(num,den);
    return fresultado;
}
Fraccion Fraccion::resta(Fraccion farg){
    int num = numerador * farg.get_denominador() -  denominador * farg.get_numerador();
    int den = denominador * farg.get_denominador();
    Fraccion fresultado(num,den);
    return fresultado;
}
Fraccion Fraccion::multiplicacion(Fraccion farg){
    int num = numerador * farg.get_numerador();
    int den = denominador * farg.get_denominador();
    Fraccion fresultado(num,den);
    return fresultado;
}
Fraccion Fraccion::operator + (Fraccion const &farg){
    int num = (numerador * farg.denominador) +  (denominador * farg.numerador);
    int den = denominador * farg.denominador;
    Fraccion fresultado(num,den);
    return fresultado;
    }
Fraccion Fraccion::operator - (Fraccion const &farg){
    int num = (numerador * farg.denominador) -  (denominador * farg.numerador);
    int den = denominador * farg.denominador;
    Fraccion fresultado(num,den);
    return fresultado;
    }
Fraccion Fraccion::operator * (Fraccion const &farg){
    int num = numerador * farg.numerador;
    int den = denominador * farg.denominador;
    Fraccion fresultado(num,den);
    return fresultado;
}
//float operator /(const Fraccion &farg){
   // int resp;
 //   resp=num/den;
   // return resp;
//}
