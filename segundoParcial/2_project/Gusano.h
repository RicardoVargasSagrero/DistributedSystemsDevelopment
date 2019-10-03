#ifndef GUSANO_H__
#define GUSANO_H__
#include "Coordenada.h"
class Gusano{
    private:    
        Coordenada c[50];
    public: 
        void dibujar();
        void imprimirCoordenadas();
        void setCoordenadas(double xx, double yy);
};