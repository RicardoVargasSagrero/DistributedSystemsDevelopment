#include "gfx.h"
#include <unistd.h>
#include <cmath> 
#include <iostream>
using namespace std;

int main(){
    int t;
    double seno;
    gfx_open(800, 600, "Ejemplo Micro Animacion GFX");
    gfx_color(255,255,255);
    for(t = 0; t < 100; t++){
        seno = sin(t);
        gfx_clear();
        //gfx_line(100,100,20,20);
        //gfx_line(200*t,200*t,100*t,100*t);
        //gfx_line(t*5+80, t*3+40, t*3+40, t*5+80);
        //gfx_line(t*seno,t*50,t*seno,t*50);
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_point(100+t,100+t);
        t++;
        gfx_flush();
        //usleep(41666); //24 por segundo
        sleep(1);
    }
return 0;   
}