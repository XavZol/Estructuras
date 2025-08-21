/* Realizar un programa que lea un arreglo de estructuras los datos de N empleados
de la empresa y que imprima los datos del empleado con mayor y menor salario. 
*/
#include<iostream>
#include<conio.h>
using namespace std;
struct Empleado{
    char nombre[20];
    float salario;
}emple[100];
int main(){
int n_empleados, posM=0, posm=0;
float mayor=0, menor=9999;
cout<<"Digite el numero de empleados: ";
cin>>n_empleados;
for (int i=0; i<n_empleados; i++){
    fflush(stdin);// vaciar el baffle
    cin.ignore();// vaciar el baffle
    cout<<i+1<<". Digite su nombre: ";
    cin.getline(emple[i].nombre,20,'\n');
    cout<<i+1<<". Digite su salario: ";
    cin>>emple[i].salario;
// Empleado con mayor salario
    if(emple[i].salario > mayor){
        mayor = emple[i].salario;
        posM = i;
    }
    // Empleado con menor salario
    if(emple[i].salario < menor){
        menor = emple[i].salario;
        posm = i;
    }
    cout<<"\n";
}
    cout<<"\n Datos del empleado con mayor salario. \n";
    cout<<"Nombre: "<<emple[posM].nombre<<endl;
    cout<<"Salario: "<<emple[posM].salario<<endl;

    cout<<"\n Datos del empleado con menor salario. \n";
    cout<<"Nombre: "<<emple[posm].nombre<<endl;
    cout<<"Salario: "<<emple[posm].salario<<endl;

getch();
    return 0;
}