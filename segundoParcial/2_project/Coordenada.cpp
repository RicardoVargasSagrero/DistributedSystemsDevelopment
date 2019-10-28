#include "Coordenada.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
Coordenada::Coordenada(int xx, int yy) : x(xx), y(yy) { }
void Coordenada::setX(int xx){
	x = xx;
}
void Coordenada::setY(int yy){
	y = yy;
}
int Coordenada::obtenerX(){
	return x;
}
int Coordenada::obtenerY() {
	return y;
}
