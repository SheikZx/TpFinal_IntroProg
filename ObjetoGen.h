#ifndef OBJETOGEN_H
#define OBJETOGEN_H
#include <ctime>

class ObjetoGen {
public:
	
	ObjetoGen(int v);
	void dibujar();
	void borrar();
	virtual bool update(int x);
	virtual int getpuntos();
	virtual void limpiarpuntos();
	void cambiarvelo(int x);
	
	int posx;
	int posy;
	
protected:
	

	char matriz [3][3];
	int color [3][3];
	
	int ancho;
	int alto;
	
	clock_t tempo;
	clock_t paso;
	int velocidad;
	
};

#endif

