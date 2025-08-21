/* Hacer una estructura llamada alumno, en la cual se tendrán los siguientes Campos:
Nombre, edad, promedio, pedir datos al usuario para 3 alumnos, comprobar cual de los 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno.
*/
#include<iostream>
#include<conio.h>
using namespace std;

struct Alumno{
char  nombre [20];
int edad;
float promedio;
}alumnos[3]; 

int main(){
float mayor=0;
int pos;
// Guardando o almacenando los datos para 3 alumnos.
for(int i=0;i<3;i++){
    fflush(stdin); // vaciar el baffle
    cin.ignore(); //vaciar el baffle
    cout<<i+1<<". Digite su nombre: "; cin.getline(alumnos[i].nombre,20,'\n');
    cout<<i+1<<". Digite su edad: "; cin>>alumnos[i].edad;
    cout<<i+1<<". Digite su promedio: "; cin>>alumnos[i].promedio;
    cout<<"'\n";
// Comprobando cual de los 3 alumnos tiene el mejor promedio.
    if(alumnos[i].promedio>mayor){
        mayor = alumnos[i].promedio;
        pos = i; 
    }
}
// Imprimiendo quien tiene le mejor promedio.
cout<<"El alumno que mejor promedio tiene es \n";
cout<<"\nNombre: "<<alumnos[pos].nombre<<endl;
cout<<"Edad: "<<alumnos[pos].edad<<endl;
cout<<"Promedio: "<<alumnos[pos].promedio<<endl;
getch();
return 0;
}