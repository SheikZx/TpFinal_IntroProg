#ifndef AUTOENEM1_H
#define AUTOENEM1_H
#include "ObjetoGen.h"

class AutoEnem1 : public ObjetoGen {
public:
	AutoEnem1(int x0, int y0, int vel);
	bool update(int v);
	int getpuntos();
	void limpiarpuntos();
private:
	int puntos1;
};

#endif

