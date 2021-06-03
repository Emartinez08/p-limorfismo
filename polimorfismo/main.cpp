#include "Fraccion.h"
#include "Vect.h"
#include <iostream>
using namespace std;

int main(){
    cout << "Evaluando la clase Fraccion:" << endl << "============================" << endl;
    cout << "Definicion y reduccion:" << endl;

    cout << "Fraccion 1 (f1): ";
    Fraccion f1 (30000,75000); // Fraccion 1: 2/5
    f1.print();
    cout << "Fraccion 2 (f2): ";
    Fraccion f2 (6,12); //  Fraccion 2: 1/2
    f2.print();
    cout << "Fraccion 3 (f3): ";
    Fraccion f3 (-3,12); // Fraccion 3: -1/4 (negativo/positivo)
    f3.print();
    cout << "Fraccion 4 (f4): ";
    Fraccion f4 (3,-12); // Fraccion 4: -1/4 (positivo/negativo)
    f4.print();
    cout << "Fraccion 5 (f5): ";
    Fraccion f5 (-3,-12); // Fraccion 5: 1/4 (negativo/negativo)
    f5.print();
    cout << "Fraccion 6 (f6): ";
    Fraccion f6; // Fraccion 6: 0/1 (valor por defecto)
    f6.print();


    cout << endl << "Evaluando la clase Vect:" << endl << "============================" << endl;
    cout << "Definicion de arreglos de 4 fracciones:" << endl;
    Vect af1(4);
    Vect af2(4);

    Fraccion farray[4] = {f1,f2,f3,f6};
    Fraccion farray2[4] = {f1,f2,f1,f5};
    Vect af3(4,farray);
    Vect af4(4,farray2);
    cout<<""<<endl;
    cout << "Suma de arreglos:" << endl;
    af1 = af3 + af4;
    af1.imprimir();
    cout << "resta de arreglos:" << endl;
    af2 = af3 - af4;
    af2.imprimir();
    cout << "producto punto:" << endl;
    Fraccion fa(af3*af4);
    fa.print();
    cout << "producto cruz:" << endl;
    Vect fa2(4);
    fa2=af3.producto(af4);
    fa2.imprimir();
    float angulo;
    angulo=af3.angulo(af4);
    cout<<"angulo: "<<angulo<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout << "Definicion de arreglos de 3 fracciones:" << endl;

    Fraccion farray3[3]={f1,f2,f3};
    Vect af5(3,farray3);
    Fraccion farray4[3]={f4,f5,f6};
    Vect af6(3,farray4);

    Vect af7(3);
    Vect af8(3);
    Vect af9(3);
    cout << "Suma de arreglos:" << endl;
    af7 = af5 + af6;
    af7.imprimir();
    cout << "resta de arreglos:" << endl;
    af8 = af5 - af6;
    af8.imprimir();
    cout << "producto punto:" << endl;
    Fraccion fb(af5*af6);

    fb.print();
    cout << "producto cruz:" << endl;
    af9=af5.producto(af6);
    af9.imprimir();

    float angulo1;
    angulo1=af5.angulo(af6);
    cout<<"angulo: "<<angulo1<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout << "magnitud y escalamiento de af3:" << endl;
    cout << "magnitud: " <<af3.get_size()<< endl;
    Vect es(4);
    es=af3.producto(3);
    cout<<"escalamiento: "<<endl;
    es.imprimir();
    cout<<""<<endl;
    cout<<""<<endl;
    cout << "magnitud y escalamiento de af5:" << endl;
    cout << "magnitud: " <<af5.get_size()<< endl;
    Vect es1(3);
    es1=af5.producto(4);
    cout<<"escalamiento: "<<endl;
    es1.imprimir();
    cout<<""<<endl;
    cout<<""<<endl;
    cout << "Operaciones con arreglos de diferentes dimensiones:" << endl;
    Vect af10(4);
    Vect af11(4);
    Vect af12(4);
    cout << "Suma de arreglos:" << endl;
    af10 = af5 + af4;

    cout << "resta de arreglos:" << endl;
    af11 = af5 - af4;

    cout << "producto punto:" << endl;
    Fraccion fc(af5*af4);

    cout << "producto cruz:" << endl;
    af12=af5.producto(af4);

    cout << "angulo:" << endl;
    float angulo2;
    angulo2=af5.angulo(af4);
}
