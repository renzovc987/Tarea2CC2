#include <iostream>
//2.6
using namespace std;
class Point
{
	private :
	int x, y;

	public :
	Point (int u, int v) : x(u), y(v) {}
	int getX () { return x; }
	int getY () { return y; }
};
int main()
{
    // El error es la falta de delete, ya que al separar un espacion de memoria se debe colocar delete para liberarla;
    Point *p = new Point (5, 3);
	cout << p->getX()<<" "<< p->getY();
	return 0;
}
