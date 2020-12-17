#include "ObjetoGen.h"
#include <conio2.h>
#include "Juego.h"

ObjetoGen::ObjetoGen(int vel) {
	
	velocidad = vel;
	paso=CLOCKS_PER_SEC/velocidad;
	tempo=clock();
	
}

void ObjetoGen::dibujar(){
	
	for (int i= 0; i<ancho; i++){
		for (int k= 0; k<alto; k++){
			textcolor(color[i][k]);	
			putchxy(posx+i,posy+k,matriz[i][k]); 
		}
	}
	
}
	
void ObjetoGen::borrar(){
	
	for (int i= -1; i<ancho+1; i++){
		for (int k= -1; k<alto+1; k++){
			putchxy(posx+i,posy+k,' '); 
		}
	}
	
}

bool ObjetoGen::update(int x){
}

int ObjetoGen::getpuntos(){
}

void ObjetoGen::limpiarpuntos(){
}

void ObjetoGen::cambiarvelo(int x){
	
	velocidad = velocidad * x;
	
}
