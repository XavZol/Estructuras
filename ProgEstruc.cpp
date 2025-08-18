//Solicita datos de la persona en la estructura
// Iniciamos con estructuras de datos en C++
#include<iostream>
#include<conio.h>  
using namespace std;

struct persona{
char nombre[20];
int edad;
}persona1;
int main(){
cout<< "Ingrese el nombre de la persona: ";
cin.getline(persona1.nombre, 20, '\n');
cout<< "Ingrese la edad de la persona: ";
cin>>persona1.edad;

 cout<< "\nDatos de la persona:\n";
cout<< "Nombre: " << persona1.nombre << endl;
cout<< "Edad: " << persona1.edad << endl;   
getch();
return 0;
}

