Outs.o: gfx.c animacion.cpp 
	gcc gfx.c -c && g++ animacion.cpp -c

animacion: gfx.o animacion.o 
	g++ gfx.o animacion.o -o animacion -lX11

clean:
	rm *.o