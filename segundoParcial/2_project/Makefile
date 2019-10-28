outs: gfx.c animacion.cpp Coordenada.cpp Gusano.cpp
	gcc gfx.c -c 
	g++ animacion.cpp -c
	g++ Coordenada.cpp -c
	g++ Gusano.cpp -c
	
animacion: gfx.o Gusano.o Coordenada.o animacion.cpp
	g++ gfx.o Gusano.o Coordenada.o animacion.cpp -o animacion.o -lX11

clean:
	rm *.o
