#include <cstdio>
#include <conio.h>
#include <iostream>

using namespace std;

int main ( int argc, char * argv[ ] )
{

int Year1, Year2, Edad;

cout<<"Este programa calcula el a�o de nacimiento de una persona.\n";
cout<<"Digite el a�o actual: \n";
cin>> Year1;
cout<<"Digite la edad que cumplira en el a�o actual: \n";
cin>>Edad;


Year2= Year1-Edad;


cout<<"El a�o de nacimiento fue en: "<<Year2;
getch();
return 0;
}
