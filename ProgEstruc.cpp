/*defina una estructura que sirva para representar a una personas. La estructura debe contener dos campos
: el nombre de la persona y un valor de tipo lógico que indica si la persona tiene algún tipo de discapacidad
Realice un programa que dado un vector de personas rellene dos nuevos vectores: uno que contenga las personas que no tienen
ninguna discapacidad y otro que contenga las personas con discapacidad.*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
struct Persona{
    char nombre [30];
    bool discapacidad;
}personas[100], personasSinD[100], personasConD[100];
int main(){
    int numero_personas, j=0, k=0;
    fflush(stdin);
    cin.ignore();
    cout<<"Digite el numero de personas:";
    cin>>numero_personas;
    for(int i=0; i<numero_personas; i++){
        cout<<"Digite el nom[bre de la persona:";
        cin.getline(personas[i].nombre,30,'\n');
        cout<<"La personas tiene alguna discapacidad (1/0):";
        cin>>personas[i].discapacidad;
        
//almacenar personas con discapacidad y sin discapacidad 
if (personas[i].discapacidad == 1){
    strcpy(personasConD[j].nombre, personas[i].nombre);
    j++;
}else{ 
    strcpy(personasSinD[k].nombre, personas[i].nombre);
    k++;
}
    }
    cout<<"\nPersonas sin discapacidad:\n";
    for(int i=0; i<k; i++){
        cout<<personasSinD[i].nombre<<endl;
    }
    cout<<"\nPersonas con discapacidad:\n";
    for(int i=0; i<j; i++){
        cout<<personasConD[i].nombre<<endl;
    }
//flush para limpiar el bufer y también otro comando
    getch();
    return 0;
}
//bool es para definir valores lógicos 
