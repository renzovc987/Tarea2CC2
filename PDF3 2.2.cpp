#include <iostream>
using namespace std;
//2.2
//El error es que se esta modificando las varibles de una funcion declarada const y eso no se puede hacer
class Point{
	private :
	int x, y;
	public :
	Point (int u, int v) : x(u), y(v) {}
	int getX () { return x; }
	int getY () { return y; }
	// El programa correria si se elimina const (Linea 13)
	void setX (int newX )const{ x = newX ; }
};
int main()
{
    Point p(5, 3);
	p. setX (9001) ;
	cout << p.getX () <<" "<< p.getY (); // Sin const imprimiria 9001 y 3
	return 0;
}
