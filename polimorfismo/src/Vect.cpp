#include "Vect.h"
#include "Fraccion.h"
#include <iostream>
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

//Suma de fracciones (no modifica el objeto actual)
//Vect Vect::suma(Vect otrov){ //inaArrfrac
    // Si los tamaños de los arreglos coinciden
  //  if(size == otrov.get_size()){
    //    Vect newvect(size);
      //  for (int i=0; i<size; i++){
            //En la nueva fraccion estable el resultado de la suma entre las 2 fracciones con el mismo indice
        //    newvect.set_fraccion(i, arr[i].suma(otrov.get_fraccion(i)));
        //}
        //return newvect;
    //}else{
      //  cout << "Los arreglos no tienen el mismo numero de elemetos" << endl;
      //  return Vect();
    //}
//}

//Multiplicacion de fracciones (no modifica el objeto actual)
//Arrfrac Arrfrac::multiplicacion(Arrfrac inArrfrac){
    // Si los tamaños de los arreglos coinciden
  //  if(size == inArrfrac.getSize()){
    //    Arrfrac newArrfrac(size);
      //  for (int i=0; i<size; i++){
            //En la nueva fraccion estable el resultado de la multiplicacion entre las 2 fracciones con el mismo indice
        //    newArrfrac.setFraccion(i, arr[i].multiplicacion(inArrfrac.getFraccion(i)));
        //}
      //  return newArrfrac;
    //}else{
      //  cout << "Los arreglos no tienen el mismo numero de elemetos" << endl;
        //return Arrfrac();
    //}
//}

//Suma de fracciones (si modifica el objeto actual) [como ejemplo alternativo de la funcion suma]
//void Arrfrac::sumaInPlace(Arrfrac inaArrfrac){
    // Si los tamaños de los arreglos coinciden
  //  if(size == inaArrfrac.getSize()){
    //    for (int i=0; i<size; i++){
            //Realiza la suma y la guarda en el objeto que llama este metodo
      //      arr[i] = arr[i].suma(inaArrfrac.getFraccion(i));
       // }
    //}else{
      //  cout << "Los arreglos no tienen el mismo numero de elemetos" << endl;
    //}
//}

//void Arrfrac::agregarFraccion(Fraccion f){
    // Se duplica el tamaño de la memoria para evitar trasladar arreglos de elementos cada que se agrega una fraccion
  //  if(size+1 > sizeMem){
        //Se crea un nuevo arreglo de fracciones con el doble de memoria
    //    Fraccion * newArr = new Fraccion[size*2];
        //Se copia el arreglo en el nuevo arreglo
      //  for (int i=0; i<size; i++){
          //  newArr[i] = arr[i];
        //}
        //newArr[size+1] = f;
        //arr = newArr;
        //sizeMem = size*2;
        //size = size+1;
    //}else{
        //Si hay suficiente memoria reservado, entonces, simplemente agregalo
      //  arr[size+1] = f;
        //size++;
    //}
//}
//void Arrfrac::eliminarFraccion(){ //ultimo elemento
  //  arr[size].setNumerador(0);
    //arr[size].setDenominador(1);
    //size--;
//}
//void Arrfrac::imprimir(bool showSize){
  //  if(showSize)
    //    cout << "size: " << size << ", sizeMem: " << sizeMem << " --- ";
    //cout << "[";
    //int i;
    //for (i=0; i<size; i++){
      //  cout << arr[i].getNumerador() << "/" << arr[i].getDenominador();
        //if( i < size-1)
          //  cout << ", ";
    //}
    //cout << "]" << endl;
//}
//ejemplo

//Vect Vect::operacion(Vect otrov){ //inaArrfrac
    // Si los tamaños de los arreglos coinciden
   // if(size == otrov.get_size()){
       // Vect newvect(size);
//friend Vect& operator +(const Vect &f1,const Vect &f2);
//if(sizes == f2.sizes()){
//        Vect newvect(sizes);
Vect Vect::operator + (Vect const &f2){
   // int sizes=arr.get_size;
        if (sizes == f2.sizes){
        Vect newvect(sizes);
        for (int i=0; i<sizes; i++){
          newvect.arr[i]=arr[i].suma(f2.arr[i]);
            //this->arr[i].suma(f2.get_fraccion(i));
            //En la nueva fraccion estable el resultado de la suma entre las 2 fracciones con el mismo indice
           // newvect[i].set_fraccion= arr[i].suma(f2.get_fraccion[i]);
            //newvect.set_fraccion(i, arr[i].suma(otrov.get_fraccion(i)));
//            newvect.set_fraccion(i, arr[i].suma(f2.get_fraccion(i)));
        }
        return newvect;
        }
       // else
         //   cout<<"Los vectores no tienen el mismo numero de elemetos" << endl;
        //return Vect();
    }
//    Vect operator - (otrov){
  //      if(sizes == otrov.get_size()){
    //    Vect newvect(sizes);
      //  for (int i=0; i<sizes; i++){
            //En la nueva fraccion estable el resultado de la suma entre las 2 fracciones con el mismo indice
        //    newvect.set_fraccion[i]= arr[i] - otrov.get_fraccion[i];
            //newvect.set_fraccion(i, arr[i].suma(otrov.get_fraccion(i)));
          //  newvect.set_fraccion(i, arr[i].suma(otrov.get_fraccion(i)));
        //}
       // return newvect;
        //}
        //else
          //  cout<<"Los vectores no tienen el mismo numero de elemetos" << endl;
        //return Vect();
    //}

       //
        //for (int i=0; i<size; i++){
            //En la nueva fraccion estable el resultado de la suma entre las 2 fracciones con el mismo indice
          //  newvect.set_fraccion(i, arr[i].suma(otrov.get_fraccion(i)));
        //}
        //return newvect;
   // }
    //else{
    //    cout << "Los vectores no tienen el mismo numero de elemetos" << endl;
    //    return Vect();
    //}
//}
void Vect::imprimir(){
    int i;
    for (i=0; i<sizes; i++){
        cout << arr[i].get_numerador() << "/" << arr[i].get_denominador();
        if( i < sizes-1)
            cout << ", ";
    }
}
