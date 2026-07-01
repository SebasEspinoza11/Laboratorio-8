#include <iostream>
#include "arreglos.h"
#include <stdio.h>

using namespace std;

int main() {
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	//--------Ejercicio 3--------
    char frase[] = "El primer hombre en pisar la luna fue Neil Amstrong";
    char siglas[100];
    obtenerSiglas(frase, siglas);
    cout << "Las siglas de la cadena son: " << siglas << endl;

    char texto[] = "12345";
    cout << "De string a entero: " << stringAEntero(texto) << endl;

    char frase2[] = "la luna fue Neil";
    cout << "El caracter mas repetido es : " << caracterMasRepetido(frase2) << endl;
    
    return 0;
}

