#include<iostream>
#include <cstdlib>
#include "Juego.h"
using namespace std;

int main (int argc, char *argv[]) {
	
	srand(time(NULL));
	Juego J(2);
	J.play();
	
	return 0;
}

