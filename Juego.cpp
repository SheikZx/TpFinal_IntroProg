#include <iostream>
#include <ctime>
#include <conio2.h>
#include <windows.h>
#include "Juego.h"
#include "ObjetoGen.h"
#include <cstdlib>
using namespace std;

Juego::Juego(int vel) {
	
	velocidad = vel;
	pasoJ=CLOCKS_PER_SEC/velocidad;
	tempoJ=clock();
	
	dibujarEscenario();
	
}


void Juego::play(){
	
	tutorial();
	tutorial2();
	
	bool flag = true;
	while(flag) {

		Enem1->update(nivel);
		//la velocidad del obstáculo es constante a propósito jaja
		Cosa->update(1);
		Enem2->update(nivel);
		
		//colisiones
		if((Enem1->posx+2 >= Jugador->posx) && (Enem1->posy >= Jugador->posy-2) && (Enem1->posx-2 <= Jugador->posx) && (Enem1->posy-2 <= Jugador->posy)){
			
			GameOver();
			
		}else
		
		if((Enem2->posx+2 >= Jugador->posx) && (Enem2->posy >= Jugador->posy-2) && (Enem2->posx-2 <= Jugador->posx) && (Enem2->posy-2 <= Jugador->posy)){
			
			GameOver();
			
		}else
		
		if((Cosa->posx+2 >= Jugador->posx) && (Cosa->posy >= Jugador->posy-2) && (Cosa->posx-2 <= Jugador->posx) && (Cosa->posy-2 <= Jugador->posy)){
			
			GameOver();
			
		};
		
		//actualizar puntuacion y nivel
		puntuacion = puntuacion + Enem1->getpuntos() + Enem2->getpuntos();
		contador = contador + Enem1->getpuntos() + Enem2->getpuntos();
		
		Enem1->limpiarpuntos();
		Enem2->limpiarpuntos();
		
		if(contador == 20){
			
			nivel++;
			contador = 0;
		}
		
		//mostrar puntuacion y nivel
		gotoxy(65,20);
		textcolor(7);
		cout<<"Puntos: "<<puntuacion<<"";
		gotoxy(65,19);
		cout<<"Nivel "<<nivel<<"";
		
		if(kbhit()) { 
			int tecla=getch();
			
			switch(tecla){
				
			case 75: //izquierda
				flag = Jugador->update(1);
				break;
			case 77: //derecha
				flag = Jugador->update(2);
				break;
			}
	
		}
	}
}

void Juego::dibujarEscenario(){
	
	for(int i=0; i<43; i++){
		textcolor(7);
		putchxy(5, i, '¦');
		putchxy(4, i, '¦');
		putchxy(60, i, '¦');
		putchxy(61, i, '¦');
	}
	
}

void Juego::tutorial(){
	
	//tutorial
	gotoxy(15,5);
	cout<<"Mueve el auto con las flechas del teclado"<<endl;
	gotoxy(15,6);
	cout<<"       <-              ->      "<<endl;
	gotoxy(15, 10);
	cout<<"Esquiva otros autos para ganar puntos!"<<endl;
	
	gotoxy(15,15);
	cout<<"Prueba a moverte"<<endl;
	
	bool tecla1 = false;
	bool tecla2 = false;
	
	while(tecla1==false || tecla2 == false){
		
		int teclatuto;
		
		if(kbhit()){
			
			teclatuto = getch();
			
			switch(teclatuto){
			case 75:
				Jugador->update(1);
				tecla1 = true;
				break;
			case 77:
				Jugador->update(2);
				tecla2 = true;
				break;
			}
			
		}
		
	}
	
	//borrar tutorial
	gotoxy(15,5);
	cout<<"                                         "<<endl;
	gotoxy(15,6);
	cout<<"                               "<<endl;
	gotoxy(15, 10);
	cout<<"                                      "<<endl;
	
	gotoxy(15,15);
	cout<<"                "<<endl;
	
}

void Juego::tutorial2(){
	
	textcolor(7);
	//tutorial
	gotoxy(65,5);
	cout<<"Mueve el auto con las flechas del teclado"<<endl;
	gotoxy(65,6);
	cout<<"       <-              ->      "<<endl;
	gotoxy(65, 10);
	cout<<"Esquiva otros autos para ganar puntos!"<<endl;
}



void Juego::GameOver(){
	
	for(int i = 0; i < 60; i++){
		for(int k = 0; k < 105; k++){
			
		gotoxy(k,i);
		cout<<" ";
			
		}
	}
	
	gotoxy(25,8);
	textcolor(7);
	cout<<"Has perdido :'c"<<endl;
	gotoxy(22,9);
	cout<<"Alcanzaste el nivel "<<nivel<<""<<endl;
	gotoxy(18,10);
	cout<<"Tu puntuacion fue de "<<puntuacion<<" puntos"<<endl;
	
	exit(0);
}
