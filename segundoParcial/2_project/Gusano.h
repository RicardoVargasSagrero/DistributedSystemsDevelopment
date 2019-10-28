#ifndef GUSANO_H__
#define GUSANO_H__
#include "Coordenada.h"
#include <unistd.h>
#include <cmath> 
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "gfx.h"
using namespace std;
class Gusano{
    private:    
        Coordenada c[50];
    public: 
        Gusano();
        void inicializar(int);
        void movimientoRecto();
        int getX(int);
        int getY(int);
        void dibujar();
        void imprimirCoordenadas();
        void setCoordenadas(double xx, double yy);
};
#endif