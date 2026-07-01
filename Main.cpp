#include <iostream>
#include "arreglos.h"
#include <stdio.h>

using namespace std;

int main(){
    
	int cantidad;
    float arreglo[100];

    cout << "Ingrese la cantidad de datos: ";
    cin >> cantidad;

    for(int i = 0; i < cantidad; i++){
        cout << "Ingrese el dato " << i + 1 << ": ";
        cin >> arreglo[i];
    }

    cout << "La media es: " << media(arreglo, cantidad) << endl;
    cout << "La varianza es: " << varianza(arreglo, cantidad) << endl;;
    cout << "La desviacion estandar es: " << desviacion(arreglo, cantidad) << endl;;
    cout << "La curtosis es: " << curtosis(arreglo, cantidad) << endl;;
    cout << "El numero mayor es: " << maximo(arreglo, cantidad) << endl;;
    cout << "El numero menor es: " << minimo(arreglo, cantidad) << endl;;


}

