#ifndef AUTOENEM2_H
#define AUTOENEM2_H
#include "ObjetoGen.h"

class AutoEnem2 : public ObjetoGen {
public:
	AutoEnem2(int x0, int y0, int vel);
	bool update (int v);
	int getpuntos();
	void limpiarpuntos();
private:
	int puntos2;
};

#endif

