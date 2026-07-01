#include <iostream>
#include <stdio.h>
#include "arreglos.h"
using namespace std;


void obtenerSiglas(char texto[], char resultado[]) {
    int i = 0;
    int j = 0;

    if(texto[0] != '\0'){
        char letra = texto[0];
        if(letra >= 'a' && letra <= 'z') letra = letra - 32;
        resultado[j++] = letra;
        resultado[j++] = '.';
    }

    while(texto[i] != '\0') {
        if(texto[i] == ' ' && texto[i + 1] != '\0'){
            char letra = texto[i + 1];
            if(letra >= 'a' && letra <= 'z') letra = letra - 32;
            resultado[j++] = letra;
            resultado[j++] = '.';
        }
        i++;
    }
    resultado[j] = '\0';
}

int stringAEntero(char texto[]) {
    int numeroFinal = 0;
    int i = 0;

    while(texto[i] != '\0'){
        numeroFinal = (numeroFinal * 10) + (texto[i] - '0');
        i++;
    }
    return numeroFinal;
}


char caracterMasRepetido(char texto[]){
    char letraMasRepetida = texto[0];
    int maximoRepeticiones = 0;
    int i = 0;

    while (texto[i] != '\0'){
        if (texto[i] != ' '){ 
            int contadorActual = 0;
            int j = 0;
           
            while (texto[j] != '\0') {
                if (texto[i] == texto[j]) contadorActual++;
                j++;
            }

            if(contadorActual > maximoRepeticiones){
                maximoRepeticiones = contadorActual;
                letraMasRepetida = texto[i];
            }
        }
        i++;
    }
    return letraMasRepetida;
}


