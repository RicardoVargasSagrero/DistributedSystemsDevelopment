#ifndef COORDENADA_H_
#define COORDENADA_H_

class Coordenada {  
	private:  
		int x;
		int y;
	public:
	Coordenada(int = 0, int = 0);
	void setX(int xx);
	void setY(int yy);
	int obtenerX();
	int obtenerY();
};
#endif