 /*2. Realizar el algoritmo que permita resolver la siguiente expresión aritmética
X = ( 3 * 5 * (6 + ( Y * 2 / 3 ) - 4 ) / 8 )
El usuario debe ingresar el valor de Y.
Realizar el programa en lenguaje DEV C++.
Para verificar que usted comprende la jerarquía de operaciones realice la prueba
de escritorio al algoritmo y compare su resultado con el obtenido en el programa
realizado en DEV C++. Recuerde realizar la prueba con el mismo dato de entrada
que le ingresa al computador.*/

#include <iostream>
using namespace std;

int main(){
    float Y;
	cout<<"ingrese el valor de Y: ";
	cin>> Y;
	
	float X = ( 3 * 5 *(6 + ( Y * 2 / 3 ) - 4 ) / 8 ) ;
	cout<<"el resultado de X es:  ";
	cout<<X;
	
	
	return 0;
	
}
  
