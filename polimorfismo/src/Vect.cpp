#include "Vect.h"
#include "Fraccion.h"
#include <iostream>
#include <math.h>
#define PI 3.14159265
using namespace std;

//Constructor sin argumentos
Vect::Vect(){
    arr = new Fraccion[1];
    sizes = 1;
    sizeMem = 1;
}

//Constructor con tamaño especifico
Vect::Vect(int a){
    sizes = a;
    arr = new Fraccion[a];
    sizeMem = a;
}

//Constructor con arreglo especifico
Vect::Vect(int a, Fraccion * arrf){
    arr = arrf;
    sizes = a;
    sizeMem = a;
}

//Obtener tamaño del arreglo
int Vect::get_size(){
    return sizes;
}

//Obtener Fraccion por indice
Fraccion Vect::get_fraccion(int i){
    return arr[i];
}

//Cambiar una fraccion por indice
void Vect::set_fraccion(int i, Fraccion f){
    arr[i] = f;
}

Vect Vect::operator + (Vect const &f2){
        if (sizes == f2.sizes){
        Vect newvect(sizes);
        for (int i=0; i<sizes; i++){
          newvect.arr[i]=arr[i]+(f2.arr[i]);
        }
        return newvect;
        }
        else
            cout<<"Los vectores no tienen el mismo numero de elemetos" << endl;
        return Vect();
    }
Vect Vect::operator - (Vect const &f2){
        if (sizes == f2.sizes){
        Vect newvect(sizes);
        for (int i=0; i<sizes; i++){
          newvect.arr[i]=arr[i]-f2.arr[i];
        }
        return newvect;
        }
        else
            cout<<"Los vectores no tienen el mismo numero de elemetos" << endl;
        return Vect();
    }

Fraccion Vect::operator * (Vect const &f2){

        Fraccion res(0,1);
        if (sizes == f2.sizes){
        Vect newvect(sizes);
        for (int i=0; i<sizes; i++){
          newvect.arr[i]=arr[i]*(f2.arr[i]);
          res=res+(newvect.arr[i]);
        }
        return res;
        }
        else
            cout<<"Los vectores no tienen el mismo numero de elemetos" << endl;
        return res;
    }


Vect Vect::producto(Vect v2){
    if ((sizes == 3)&(v2.get_size()== 3)){
        Vect newvect(3);
        Fraccion fr(-1,1);
        newvect.arr[0]=(arr[1]*(v2.arr[2]))-(arr[2]*(v2.arr[1]));
        newvect.arr[1]=fr*((arr[0]*(v2.arr[2]))-(arr[2]*(v2.arr[0])));
        newvect.arr[2]=(arr[0]*(v2.arr[1]))-(arr[1]*(v2.arr[0]));

        return newvect;
        }
        else
            cout<<"Los vectores no tienen el mismo numero de elemetos o tienen una longitud mayor a 3" << endl;
        return Vect();
}
float Vect::magnitud(){
    Vect newvect(sizes);
    for (int i=0; i<sizes; i++){
          newvect.arr[i].set_numerador(pow(arr[i].get_numerador(),2));
          newvect.arr[i].set_denominador(pow(arr[i].get_denominador(),2));
        }
    Fraccion f1(0,1);
//        Fraccion f2(0,1);
        for (int i=0; i<sizes; i++){
         // newvect.arr[i]=arr[i].multiplicacion(f2.arr[i]);
         f1=f1+(newvect.arr[i]);
         //f2=f2+(newvect2.arr[i]);
        }
    float a=0,b=0,c=0;
    a=sqrt(f1.get_numerador());
    b=sqrt(f1.get_denominador());
    c=a/b;
    return c;
}
float Vect::angulo(Vect v2){
    if (sizes == v2.sizes){
        Vect v1(sizes);
        Vect v22(sizes);
        for (int i=0; i<sizes; i++){
        v1.arr[i]=arr[i];
        v22.arr[i]=v2.arr[i];
        }
        Fraccion numer=v1*v2;
        float m1,m2,den,num,res,n1,n2,n3;
        m1=v1.magnitud();
        m2=v22.magnitud();
        den=m1*m2;
        n1=numer.get_numerador();
        n2=numer.get_denominador();
        num=n1/n2;
        n3=num/den;
        res=(acos(n3))*180/PI;
        return res;
    }
     else
            cout<<"Los vectores no tienen el mismo numero de elemetos" << endl;
            float er;
     return er;
}
Vect Vect::producto(int n){
     Vect newvect(sizes);
     Fraccion mlt(n,1);
        for (int i=0; i<sizes; i++){
          newvect.arr[i]=arr[i]*mlt;
        }
        return newvect;
    }

void Vect::imprimir(){
    int i;
    for (i=0; i<sizes; i++){
        cout << arr[i].get_numerador() << "/" << arr[i].get_denominador();
        if( i < sizes-1)
            cout << ", ";
    }
    cout<<""<<endl;
}
