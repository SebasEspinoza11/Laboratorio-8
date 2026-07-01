#include <iostream>
#include "arreglos.h"


float media(float arreglo[], int cantidad){
    float suma = 0;

    for(int i = 0; i < cantidad; i++){
        suma = suma + arreglo[i];
    }

    return suma / cantidad;
}

float varianza(float arreglo[], int cantidad){
    float promedio = media(arreglo, cantidad);
    float suma = 0;

    for(int i = 0; i < cantidad; i++){
        suma = suma + (arreglo[i] - promedio) * (arreglo[i] - promedio);
    }

    return suma / cantidad;
}

float desviacion(float arreglo[], int cantidad){
    float resultado = varianza(arreglo, cantidad);
    float raiz = resultado;
    
    while (raiz * raiz < resultado){
    	raiz = raiz + 0.00001;
	}
	return raiz;
}

float curtosis(float arreglo[], int cantidad){
    float promedio = media(arreglo, cantidad);
    float desviacionEstandar = desviacion(arreglo, cantidad);
    float suma = 0;
    float resultado;

    for(int i = 0; i < cantidad; i++){
        resultado = (arreglo[i] - promedio) / desviacionEstandar;
        suma = suma + resultado * resultado * resultado * resultado;
    }

    return (suma / cantidad) - 3;
}

float maximo(float arreglo[], int cantidad){
    float mayor = arreglo[0];

    for(int i = 1; i < cantidad; i++){
        if(arreglo[i] > mayor){
            mayor = arreglo[i];
        }
    }

    return mayor;
}

float minimo(float arreglo[], int cantidad){
    float menor = arreglo[0];

    for(int i = 1; i < cantidad; i++){
        if(arreglo[i] < menor){
            menor = arreglo[i];
        }
    }

    return menor;
}


