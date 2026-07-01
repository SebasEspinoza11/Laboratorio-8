#include <iostream>
#include "arreglos.h"
#include <stdio.h>

using namespace std;

int main(){
<<<<<<< HEAD

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

//-----Ejercicio 2-------
	int matriz[][4] = {
        {1,2,3,4},
        {2,1,0,0},
        {3,0,1,0},
        {4,0,0,1},
    };
	
	cout << "-Elemento maximo: " << maximoM(matriz) << endl;
	cout << "-Elemento minimo: " << minimoM(matriz) << endl; 
	cout << "-Matriz Transpuesta: \n";
	transpuesta(matriz);   
	cout << "-Traza de la matriz: " << traza(matriz) << endl; 
	simetria(matriz);
	
=======
    
	
>>>>>>> 2c08203ecbfe8edce63e1314d6cc1bb04d9bf171


}

