/*
 * Bnodo.cpp
 *
 *  Created on: 18 de may. de 2016
 *      Author: pablo
 */

#include "Bnodo.h"

struct Bnodo {

int key;
struct Bnodo *izq;
struct Bnodo *der;

};

Bnodo::Bnodo() {
	key=0;
	izq=0;
	der=0;

}

Bnodo::~Bnodo() {
	// TODO Auto-generated destructor stub
}

