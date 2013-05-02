/*
 * TerminoRegister.cpp
 *
 *  Created on: 01/05/2013
 *      Author: lara
 */

#include "TerminoRegister.h"

TerminoRegister::TerminoRegister() {
	this->frecuencia = 0;
	this->documento = 0;
	this->posiciones = new list<int>();

}

TerminoRegister::~TerminoRegister() {
	// TODO Auto-generated destructor stub
}

/*
 * Funcion de comparacion para ordenar primero por nombre y desupues por numero de documento
 */
bool TerminoRegister::cmp(TerminoRegister i, TerminoRegister j) {

	bool cmp = false;
	if (i.getTermino() < j.getTermino()
			|| (i.getTermino() == j.getTermino()
					&& i.getDocumento() < j.getDocumento())) {
		cmp = true;
	}
	return cmp;
}
