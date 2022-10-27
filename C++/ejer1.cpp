/* 1. Realizar el algoritmo que permita resolver la siguiente expresión aritmética
X = 8 + 2 * Y / 2 - 1.
El usuario debe ingresar el valor de Y.
Realizar el programa en lenguaje DEV C++.
Para verificar que usted comprende la jerarquía de operaciones realice la prueba
de escritorio al algoritmo y compare su resultado con el obtenido en el programa
realizado en DEV C++. Recuerde realizar la prueba con el mismo dato de entrada
que le ingresa al computador..*/

# include<iostream>
using namespace std;


int main (){

	float Y;
	cout << "ingresa el valor de Y: ";
	cin >> Y;

	float X = 8 + 2 * Y / 2 - 1;
	cout << "el resultado de x es:  ";
	cout <<X;
	
	return 0;
}
