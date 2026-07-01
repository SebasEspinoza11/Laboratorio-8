#include <iostream>
#include "arreglos.h"

<<<<<<< HEAD
using namespace std;

int traza(int arr[][4]){
	int suma = 0;
    
    for(int i=0; i<4; i++) suma += arr[i][i];
    
    return suma;
}

int maximoM(int arr[][4]){
	int mayor = arr[0][0];
	
	for(int i=0; i < 4; i++){
		for(int j=0; j < 4; j++){
			if(arr[i][j] > mayor) mayor = arr[i][j];
		}
	}
	
	return mayor;
}

int minimoM(int arr[][4]){
	int menor = arr[0][0];
	
	for(int i=0; i < 4; i++){
		for(int j=0; j < 4; j++){
			if(arr[i][j] < menor) menor = arr[i][j];
		}
	}
	
	return menor;
}

void transpuesta(int arr[][4]){
	for(int j=0; j < 4; j++){
		for(int i=0; i < 4; i++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void simetria(int arr[][4]){
	for(int i=0; i < 4; i++){
		for(int j=0; j < 4; j++){
			if(arr[i][j] != arr[j][i]){
				cout << "La matriz NO es simetrica\n";
				return;
			} 
		}	
	}
	cout << "La matriz SI es simetrica\n";
}







=======
>>>>>>> 2c08203ecbfe8edce63e1314d6cc1bb04d9bf171
