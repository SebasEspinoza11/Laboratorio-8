#include <iostream>
#include "arreglos.h"
#include <stdio.h>

using namespace std;

int main(){
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	
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
	


}
