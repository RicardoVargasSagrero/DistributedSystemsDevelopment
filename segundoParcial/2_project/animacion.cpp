#include "Gusano.h"

int main(int argc, char *argv[]){
    if(argc != 2){
		cout << "Forma de uso: " << argv[0] <<" numero_de_gusanos\n";
		exit(0);
	}
    /*Aleatorio*/
    srand(time(NULL));
    /*Total gusanos*/
    int total_gusanos = atoi(argv[1]);
    int i; //Numero de gusanos
    int x,n,aleatorio,t;
    int x1= 10,x2 = 10,y1 = 10 ,y2 = 10;
    double seno;
    
    gfx_open(800, 600, "Ejemplo Micro Animacion GFX");
    gfx_color(255,255,255);
    Gusano g_a[total_gusanos];
    int y;
    /*for(x = 0; x < 100; x++){
        for(n = 0; n < total_gusanos; n++){
            aleatorio = 30 + rand()%(701-1);
            cout << aleatorio << endl;
            g_a[n].inicializar(aleatorio);
            for(y = 0; y < 50;y++){
                gfx_point(g_a[n].getX(y),g_a[n].getY(y));
                gfx_flush();
            }
            usleep(46000);
            gfx_clear();
        }   
    }*/
    for(n = 0; n < total_gusanos; n++){
        aleatorio = 30 + rand()%(501-1);
        cout << aleatorio << endl;
        g_a[n].inicializar(aleatorio);
    }
    for(n = 0; n < total_gusanos; n++){
        g_a[n].dibujar();
    }
    gfx_flush();
    usleep(41666);
    gfx_clear();
    for(t = 0; t < 300; t++){
        for(n = 0; n < total_gusanos; n++){
            g_a[n].movimientoRecto();
            g_a[n].dibujar();
        }
        gfx_flush();
        gfx_clear();
        usleep(36000);
    }

    return 0;   
}