#include <iostream>
using namespace std;
//2.3
//El error esta en que no se pueden llamar a las variables privadas x e y fuera de la clase.
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
   Point p(5, 3);
   cout << p.x << " " << p.y << "\n";
   return 0;
}
