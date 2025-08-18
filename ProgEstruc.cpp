// Iniciamos con estructuras de datos en C++
#include<iostream>
#include<conio.h>  
using namespace std;

struct persona{
char nombre[20];
int edad;
}
persona2 = {"Alan", 27}, 
persona3 = {"Juan", 30};
int main (){
cout<<"Nombre de la persona 2: "<<persona2.nombre<<endl;
cout<<"Edad de la persona 2: "<<persona2.edad<<endl;

cout<<"Nombre de la persona 3; "<<persona3.nombre<<endl;
cout<<"Edad de la persona 3: "<<persona3.edad<<endl;

getch();
return 0;
}

