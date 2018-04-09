#include <iostream>
using namespace std;
// 2 CATCH THE BUG

class Point{
	private :
	int x, y;
	public :
    //DEFINIMOS EL CONSTRUCTOR Y LOS METODOS
	Point (int u, int v) : x(u), y(v) {}
	int getX () { return x; }
	int getY () { return y; }
	//DOUBLE VAL ESTA ENCARGADA DE DUPLICAR LOS VALORES DE X E Y
	void doubleVal (){
	x *= 2;
	y *= 2;
	}
};
//2.1 Inicialmente a la linea 18 le faltaba un punto y coma
// no se puede llamar doubleVal porque Point es de tipo const.
int main()
{
    Point myPoint (5, 3);
    myPoint . doubleVal ();
    //IMPRIME 10 6
	cout << myPoint . getX () << " " << myPoint . getY () << "\n";
	return 0;
}
