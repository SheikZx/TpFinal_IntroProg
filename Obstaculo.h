#ifndef OBSTACULO_H
#define OBSTACULO_H
#include "ObjetoGen.h"

class Obstaculo : public ObjetoGen {
public:
	Obstaculo(int x0, int y0, int vel);
	bool update(int x);
private:
};

#endif

