#include "AutoJug.h"
#include <conio2.h>

AutoJug::AutoJug(int x0,int y0,int vel):ObjetoGen (vel) {
	
	color[0][0]=10;
	color[1][0]=10;
	color[2][0]=10;
		
	color[0][1]=10;
	color[1][1]=10;
	color[2][1]=10;
		
	color[0][2]=10;
	color[1][2]=10;
	color[2][2]=10;
	
	matriz[0][0]='o';
	matriz[1][0]='-';
	matriz[2][0]='o';
			
	matriz[0][1]=' ';
	matriz[1][1]='¹';
	matriz[2][1]=' ';

	matriz[0][2]='o';
	matriz[1][2]='=';
	matriz[2][2]='o';
	
	ancho=3;
	alto= 3;
	
	posx=x0;
	posy=y0;
	
	offset= 2;
	
	dibujar();

}




bool AutoJug::update (int v) {
	
	borrar();
	
	switch(v){
	case 1: { // izqierda
		if(posx>6){
		posx = posx - 1*(offset);
		break;} }
	case 2: { // derecha
		if(posx<56){
		posx = posx + 1*(offset);
		break;} }
	
}
	
	if(posx < 58 && posx > 5){
		
		dibujar();
		
		return true;
	}
	
	else{return false;};
}
