#include "AutoEnem2.h"
#include <cstdlib>
using namespace std;

AutoEnem2::AutoEnem2(int x0, int y0, int vel): ObjetoGen(vel){
	
	color[0][0]=4;
	color[1][0]=4;
	color[2][0]=4;
	
	color[0][1]=4;
	color[1][1]=4;
	color[2][1]=4;
	
	color[0][2]=4;
	color[1][2]=4;
	color[2][2]=4;
	
	matriz[0][0]='o';
	matriz[1][0]='-';
	matriz[2][0]='o';
	
	matriz[0][1]=' ';
	matriz[1][1]='³';
	matriz[2][1]=' ';
	
	matriz[0][2]='o';
	matriz[1][2]='=';
	matriz[2][2]='o';
	
	ancho=3;
	alto= 3;
	
	posx=x0;
	posy=y0;
	
}

bool AutoEnem2::update(int x){
	
	
	
	if(posy>40){
		
		borrar();
		posx=(rand()%48)+7;
		posy=-3;
		puntos2++;
	};
	
	
	if(posx>5 && posx< 58){
	if(tempo+paso/x<clock()){
		
		int direccion = (rand()%2)+1;
		
		borrar();
		
		posy++;
		
		if(direccion<2){
			if(posx<57){
			posx++;
			}
		}else{
			if (posx>7){
			posx--;
			}
		}
		
		dibujar();
		
		tempo=clock(); 
	}
	return true;
}
}
int AutoEnem2::getpuntos(){
	
	return puntos2;
	
}

void AutoEnem2::limpiarpuntos(){
	
	puntos2 = 0;
	
}
