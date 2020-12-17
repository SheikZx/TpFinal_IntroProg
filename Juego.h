#ifndef JUEGO_H
#define JUEGO_H
#include "ObjetoGen.h"
#include "AutoJug.h"
#include "AutoEnem1.h"
#include "Obstaculo.h"
#include "AutoEnem2.h"
#include <cstdlib>
using namespace std;

class Juego {
public:
	Juego(int v);
	void play();
	void tutorial();
	void tutorial2();
	void dibujarEscenario();
	void GameOver();
private:
	
	int velocidad;
	clock_t tempoJ;
	clock_t pasoJ;
	
	int ranx = (rand()%52)+6;
	int ran2 =(rand()%52)+6;
	int ran3 =(rand()%52)+6;
	
	int puntuacion = 0;
	int contador = 0;
	int nivel = 1;
	
	ObjetoGen *Jugador = new AutoJug(20,40,5);
	ObjetoGen *Enem1 = new AutoEnem1(ranx,-3,10);
	ObjetoGen *Cosa = new Obstaculo(ran2, -3, 20);
	ObjetoGen *Enem2 = new AutoEnem2(ran3,-3,10);
};

#endif

