#ifndef AUTOJUG_H
#define AUTOJUG_H
#include "ObjetoGen.h"

class AutoJug : public ObjetoGen {
public:
	AutoJug(int x0,int y0,int vel);
	bool update (int v);
private:
	int offset;
};

#endif

