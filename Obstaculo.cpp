#include "Obstaculo.h"
#include <cstdlib>
using namespace std;

Obstaculo::Obstaculo(int x0, int y0, int vel): ObjetoGen(vel){
	
	color[0][0]=3;
	color[1][0]=3;
	color[2][0]=3;
	
	color[0][1]=3;
	color[1][1]=3;
	color[2][1]=3;
	
	color[0][2]=3;
	color[1][2]=3;
	color[2][2]=3;
	
	matriz[0][0]='+';
	matriz[1][0]='ç';
	matriz[2][0]='©';
	
	matriz[0][1]='¢';
	matriz[1][1]='Ø';
	matriz[2][1]='+';
	
	matriz[0][2]='¬';
	matriz[1][2]='+';
	matriz[2][2]='=';
	
	ancho=3;
	alto= 3;
	
	posx=x0;
	posy=y0;
	
}

bool Obstaculo:: update(int x){
	
	if(posy>40){
		
		borrar();
		posx=(rand()%48)+7;
		posy=-3;
		
	};
	
	if(tempo+paso<clock()){
		
		
		borrar();
		
		posy++;
		
		dibujar();
		
		tempo=clock(); 
	}
	return true;
	
}
