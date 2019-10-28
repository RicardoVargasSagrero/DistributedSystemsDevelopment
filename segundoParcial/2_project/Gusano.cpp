#include "Gusano.h"
#include <iostream>
using namespace std;
//La longitud de los gusanos debe ser constante de 50
Gusano::Gusano(){
}
void Gusano::inicializar(int coord){
    int i; 
    for(i = 0; i < 50;i++){
        c[i].setX(coord+i);
        c[i].setY(coord);
    }
}
int Gusano::getX(int posicion){
    return c[posicion].obtenerX();
}
int Gusano::getY(int posicion){
    return c[posicion].obtenerY();
}
void Gusano::dibujar(){
    int y = 0;
    for(y = 0; y < 50;y++){
        gfx_point(c[y].obtenerX(),c[y].obtenerY());            
    }
}
void Gusano::movimientoRecto(){
   int i; 
    for(i = 0; i < 50;i++){
        c[i].setX(c[i].obtenerX()+1);
        c[i].setY(c[i].obtenerY());
    } 
}
void setLinea(double xx, double yy){
    
}