/* 
 * File:   main.cpp
 * Author: Felipe Segovia Rodriguez
 *
 * Created on 25 de agosto de 2018, 23:24
 */

#include <cstdlib>
#include <iostream>

using std::cout;
using std::endl;

int cuboPorValor(int);
void cuboPorReferencia(int*);

int main() {
    //---------------INTRODUCCION-------------------------------------
    int a; //'a' es un entero
    int *aPtr = NULL; // 'aPtr' es un puntero a un objeto entero
    
    a = 7; //se asigna 7 a la variable 'a'
    aPtr = &a; //se asigna la direccion de 'a' a 'aPtr'
    
    cout << "La dirección de 'a' es " << &a <<
            "\nEl valor de 'aPtr' es " <<aPtr<<endl;
    cout << "El valor de 'a' es " << a <<
            "\nEl valor de '*aPtr' es "<< *aPtr <<endl;
    cout << "Demostración que * y & son inversos uno del otro\n" <<
            "&*aPtr = "<< &*aPtr << "\n*&aPtr = " << *&aPtr << endl;
    
    //--------------------AHORA CON FUNCIONES-------------------------
    
   /* int numero = 5;
    
    cout << "El valor original de numero es: " << numero << endl;
    
    numero = cuboPorValor(numero); //pasa el 'numero' por valor a 'cuboPorValor'
    
    cout << "El nuevo valor de numero es:" << numero << endl;
    
    int numRef = 7;
    
    cout << "El valor original de numRef es: " << numRef << endl;
    
    cuboPorReferencia(&numRef); //pasa la dirección de 'numRef' a cuboPorReferencia
    
    cout << "El nuevo valor de numRef es: " << numRef << endl;    */
    
    
    return 0;
}

int cuboPorValor(int n)
{
    return n * n * n;
}

void cuboPorReferencia(int *nPtr)
{
    *nPtr = *nPtr * *nPtr * *nPtr;
}