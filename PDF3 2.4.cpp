#include <iostream>

using namespace std;
//2.4
class Point
{
	private :
	int x, y;

	public :
	Point (int u, int v) : x(u), y(v) {}
	int getX () { return x; }
	void setX (int newX );
};
//El error esta en que la funcio setX esta fuera de alcance se tendria que declarar dentro de la clase Point
void setX (int newX ){ x = newX ; }
int main()
{
    Point p(5, 3);
	p.setX(0);
	cout << p. getX () << " " << "\n";
	return 0;
}
