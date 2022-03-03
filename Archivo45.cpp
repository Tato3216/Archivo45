#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;

void lectura();

int main(){
	lectura();
	
	system("pause");
	return 0;
}

void lectura(){
	ifstream archivo;
	string texto;
	archivo.open("entrada.txt",ios::in); //Abrimos el archivo en modo lectura
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	while(!archivo.eof()){ //mientras no sea final del archivo
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	
    int aux = 0, igual = 0;
    
    getline(archivo,texto);
    
    for(int ind = texto.length() - 1; ind >= 0; ind--) {
        if(texto[ind] == texto[aux]) {
            igual++;
        }
        aux++;
    }
    
    if(texto.length() == igual) {
        ofstream ejemplo("salida.txt");
         if (ejemplo.is_open()) { 
           ejemplo <<"Es una palabra polidroma\n";
    } else {
        ofstream ejemplo("salida.txt");
         if (ejemplo.is_open()) { 
           ejemplo <<"NO es una palabra polidroma\n";
    }
    
	
	archivo.close(); //Cerramos el archivo
}
}
}
