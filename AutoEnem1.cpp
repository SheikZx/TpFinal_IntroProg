#include "AutoEnem1.h"
#include <conio2.h>
#include <cstdlib>
using namespace std;

AutoEnem1::AutoEnem1(int x0, int y0, int vel): ObjetoGen(vel){
	
	color[0][0]=14;
	color[1][0]=14;
	color[2][0]=14;
	
	color[0][1]=14;
	color[1][1]=14;
	color[2][1]=14;
	
	color[0][2]=14;
	color[1][2]=14;
	color[2][2]=14;
	
	matriz[0][0]='o';
	matriz[1][0]='-';
	matriz[2][0]='o';
	
	matriz[0][1]=' ';
	matriz[1][1]='²';
	matriz[2][1]=' ';
	
	matriz[0][2]='o';
	matriz[1][2]='=';
	matriz[2][2]='o';
	
	ancho=3;
	alto= 3;
	
	posx=x0;
	posy=y0;
	
}
bool AutoEnem1::update(int x){
	
	if(posy>40){
		
		borrar();
		posx=(rand()%48)+7;
		posy=-3;
		puntos1++;
		
	};
	
		if(tempo+paso/x<clock()){
			
		
			borrar();
			
			posy++;
			
			dibujar();
			
			tempo=clock(); 
		}
		return true;
	

	

}


int AutoEnem1::getpuntos(){
	
	return puntos1;
	
}

void AutoEnem1::limpiarpuntos(){
	
	puntos1 = 0;
	
}
