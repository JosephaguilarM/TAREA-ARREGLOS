
#include <stdio.h>
#include <conio.h>
#include  <stdlib.h>
#include <iostream>

using namespace std;

char nombre[3][50];
float  notas [3];
int indice = 0;
void consultar(){
	 char nombre[50];
	 cout << "Digite el nombre del estudiante: ";
     cin >> nombre;
	for(int i=0; i<3; i++)
	{
		if (nombre==&nombre[i]){
			cout << "La nota es de " << notas[i];
			break;
		} else {
		}
	}

}

void ingrear() {
		
	char seguir;
		do {
	   cout << "Digite el nombre ";
	   cout <<  "Agregar telefono";
	   cout << "Agregar direccion"
		cin >> nombre[indice];
		printf("\n");
		cout <<  " Digite la nota: ";
		cin >> notas[indice];
	    cout << "Desea continuar.....s/n:    ";
      	cin >> seguir;	
      	indice++;
		} while ((seguir=='s') || (seguir=='S'));
     
       //Var
       string user, password, A,B;
       
       cout<<"/t/t/tRegistrate/n";
       cout<<--------------";
       
       cout<<"/nIngrese un Nombre de Usuario: ";
       getline(cin, user);
       cout<<"/nIngrese un password:  ";
       getline(cin,password);
       
       //Guardando el valor de user en A y el valor password en B
}


void reporte(){
	printf("\n nombre        nota ");
	printf("\n ------------------ ");
	for(int i=0; i<3; i++){
		printf("\n %s        %f ", nombre[i], notas[i]);
	}
printf("\n ");
}

void menu(){
  char seguir = 's';
  int opcion = 0;
   do {
   	cout << "\n";
   	cout << "1- Ingresar Estudiantes   \n";
   	cout << "2- Consultar Estudiantes  \n";
   	cout << "3- Reporte Estudiantes    \n";
   	cout << "4- salir                  \n";
   	cout << "Digite una opcion...    : \n" ;
   	cin >> opcion;
   
   	switch (opcion)
   	{
   		case 1: ingrear(); break;
   		case 2: consultar(); break;
   	    case 3: reporte(); break;
   	    default : break;
   	}

   }while ((seguir=='s') || (seguir=='S'));
	
}

int main(){
	
 	menu();
	 return 0;
}
