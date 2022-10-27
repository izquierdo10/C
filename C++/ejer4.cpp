#include <cstdio>
#include <conio.h>
#include <iostream>

using namespace std;

int main ( int argc, char * argv[ ] )
{

int Year1, Year2, Edad;

cout<<"Este programa calcula el año de nacimiento de una persona.\n";
cout<<"Digite el año actual: \n";
cin>> Year1;
cout<<"Digite la edad que cumplira en el año actual: \n";
cin>>Edad;


Year2= Year1-Edad;


cout<<"El año de nacimiento fue en: "<<Year2;
getch();
return 0;
}
