/* Hacer N estructuras una llamada promedio que tendrá los siguientes campos:
nota1, nota2, nota3; y otro llamada alumno que tendrá los siguientes miembros:
nombre, sexo, edad; hacer que la estructura promedio este anidada en la estructura
alumno, luego pedir todos los datos para un alummno, luego calcular su promedio, y por 
ultimo imprimir todos sus datos incluidos el promedio*/

#include<iostream>
#include<conio.h>
using namespace std;
struct promedio{
    float nota1;
    float nota2;
    float nota3;
};
struct Alumno{
    char nombre[20];
    char sexo[10];
    int edad;
    struct promedio prom;
}alumno[100];
int main(){
int numero_alumnos, posM;
float promedio_alumno[100], mayor=0;
cout<<"Digite el numero de alumnos: ";
cin>>numero_alumnos;

for(int i=0; i<numero_alumnos; i++){
    cin.ignore();
    cout<<i+1<<". Digite su nombre: "; cin.getline(alumno[i].nombre,20,'\n');
    cout<<i+1<<". Digite su sexo: "; cin.getline(alumno[i].sexo,10,'\n');
    cout<<i+1<<". Digite su edad: "; cin>>alumno[i].edad;

cout<<"\nSolicitamos las notas: \n";
cout<<"Digite la primera nota: "; cin>>alumno[i].prom.nota1;
cout<<"Digite la segunda nota: "; cin>>alumno[i].prom.nota2;
cout<<"Digite la tercer nota: "; cin>>alumno[i].prom.nota3;
//obtener el promedio del alumno
promedio_alumno[i] = (alumno[i].prom.nota1+alumno[i].prom.nota2+alumno[i].prom.nota3)/3;

if(promedio_alumno[i] > mayor ){
    mayor = promedio_alumno[i];
    posM = i;
}
}
cout<<"\n Mostrando datos del alumno con el mejor promedio\n"
cout<<"Nombre: "<<alumno[posM].nombre<<endl;
cout<<"Sexo: "<<alumno[posM].sexo<<endl;
cout<<"Edad: "<<alumno[posM].edad<<endl;
cout<<"Promedio: "<<promedio_alumno[posM]<<endl;

getch();
return 0;
}