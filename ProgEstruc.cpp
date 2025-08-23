/* Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos: nombre, país
, numero_medallas. y devuelva los datos (Nombre, país) del atleta que ha ganado el mayor número de medallas.*/
 #include<iostream>
 #include<conio.h>
 using namespace std;

 struct atleta{
    char nombre[20];
    char pais[20];
    int numero_medallas;

 }atletas[100];

 int main(){
int nAtletas, mayor=0, pos;

cout<<"Digite el numero de atletas: ";
cin>>nAtletas;

for(int i=0; i < nAtletas;i++){
    cout<<i+1<<". Digite su nombre: "; cin.getline(atletas[i].nombre,20,'\n');
    cout<<i+1<<". Digite su País: "; cin.getline(atletas[i].pais,20,'\n');
    cout<<i+1<<". Digite el numero de medallas: "; cin>>atletas.[i].numero_medallas;
    cout<<"\n";

    if(atletas[i].numero_medallas > mayor){
        mayor = atletas[i].numero_medallas;
        pod = i;
    }
}
// Imprimieno los datos del mejor atleta
cout<<"\n El ateleta con mayor numero de medallas es: \n";
cout<<"Nombre: "<<atletas[pos].nombre<<endl;
cout<<"País: "<<atletas[pos].pais<<endl;

getch();
    return 0;
 }