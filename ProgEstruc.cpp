#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
/* Hacer una estructura llamada corredor, en la cual se tendran los siguientes campos: Nombre, edad, sexo, club; y pedir datos al usuario para un corredor. Ademaás asignarle una categoría de competición:
 - Juvenil <= 18 años
 - Señor <= 40 años
 - Veterano <= 40 años
 Posteriormente imprimir todos los datos del corredor, incluida su categoría de competición*/
struct Corredor{
    char Nombre[20];
    int Edad;
    char Sexo [10];
    char Club [20];
} Corr1;
 int main(){
char categoria[20];
    cout<<"Nombre: "<<endl;
    cin.getline(Corr1.Nombre,20,'\n');
    cout<<"Edad: ";
    cin>>Corr1.Edad;
    fflush(stdin); // vaciar el baffle
    cout<<"Sexo: ";
    cin.getline(Corr1.Sexo,10,'\n');
    cout<<"Club: ";
    cin.getline(Corr1.Club,20,'\n');

    if(Corr1.Edad <= 18){
        strcpy(categoria,"Juvenil");
    } else if(Corr1.Edad <=40){
        strcpy(categoria,"Adulto");
    } else {
        strcpy(categoria,"Veterano");
    }
  cout<<"\n\nDatos del corredor: \n";
  cout<<"Nombre del corredor: "<<Corr1.Nombre<<endl;
  cout<<"Edad del corredor: "<<Corr1.Edad<<endl;
  cout<<"Sexo del corredor: "<<Corr1.Sexo<<endl;
  cout<<"Club asignado para el corredor: "<<Corr1.Club<<endl;
  cout<<"Categoria asignada al corredor: "<<categoria;
getch();
return 0;
 }
