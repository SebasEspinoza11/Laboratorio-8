#ifndef ARREGLOS_H
#define ARREGLOS_H

float media (float arreglo[], int n);
float desviacion (float arreglo[], int n);
float varianza (float arreglo[], int n);
float curtosis (float arreglo[], int n);
float maximo (float arreglo[], int n);
float minimo (float arreglo[], int n);

//-----------

int maximoM(int arr[][4]);
int minimoM(int arr[][4]);
void transpuesta(int arr[][4]);
void simetria(int arr[][4]);
int traza(int arr[][4]);

//--------------

void obtenerSiglas(char texto[], char resultado[]);
int stringAEntero(char texto[]);
char caracterMasRepetido(char texto[]);




#endif
