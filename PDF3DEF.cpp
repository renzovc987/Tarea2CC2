#include <iostream>
#include <cmath>
using namespace std;

/*
//2.1
class Point{
    private :
    int x, y;
    public :
    Point (int u, int v) : x(u), y(v) {}
    int getX () { return x; }
    int getY () { return y; }
    void doubleVal (){
    x *= 2;
    y *= 2;


    }
};

int main (){

    const Point myPoint (5, 3)
    //falta ;
    myPoint . doubleVal ();
    // myPoint es constante no se puede modificar con doubleVal
    cout << myPoint . getX () << " " << myPoint . getY () << "\n";
    return 0;
}
*/

/*
//2.2
class Point{
    private :
    int x, y;
    public :
    Point (int u, int v) : x(u), y(v) {}
    int getX () { return x; }
    int getY () { return y; }
    void setX (int newX ) const { x = newX ; }
    //las funciones constantes no pueden modificar valores
};

int main (){
    Point p(5, 3);
    p. setX (9001) ;
    cout <<p.getX()<<' '<< p.getY();
    return 0;
}
*/

/*
//2.3
class Point{
    private :
    int x, y;
    public :
    Point (int u, int v) : x(u), y(v) {}
    int getX () { return x; }
    int getY () { return y; }
};

int main ()
{
    Point p(5, 3);
    cout << p.x <<" "<< p.y <<"\n";
    //no se puede acceder a 'x' o 'y' por ser privados
    return 0;
}
*/
/*
//2.4

class Point{
    private :
    int x, y;
    public :
    Point (int u, int v) : x(u), y(v) {}
    int getX () { return x; }
    void setX (int newX );
};

void setX (int newX){ x = newX ; }
//falta indicar a q clase pertenece

int main ()
{
    Point p(5, 3);
    p.setX (0);
    cout<<p.getX() <<" "<< "\n";
    return 0;
}
*/

/*
//2.5
int main(){
    int size ;
    cin >> size ;
    int * nums = new int[size];
    for(inti= 0;i<size;++i)
    {
        cin>>nums[i];
    }
    // Calculations with nums omitted
    delete nums ;
    //deberia ser delete []
}

*/
/*
//2.6
class Point{
    private :
    int x, y;
    public :
    Point (int u, int v) : x(u), y(v) {}
    int getX () { return x; }
    int getY () { return y; }
};

int main ()
{
    Point *p = new Point (5, 3);
    cout <<p->getX()<<' '<<p->getY();
    //falta libear el espacio de memoria
    return 0;
}
*/

/*
//3.1 geometry.h
class Point {
    int x, y;

public :
    Point (int xx =0, int yy =0) {x = xx; y = yy ;}
    int getX () const { return x;}
    int getY () const { return y;}
    void setX ( const int xx) {x = xx ;}
    void setY ( const int yy) {y = yy ;}
};

int main(){
    Point p1(2,3);
    cout<<p1.getX()<<" "<<p1.getY()<<endl;
    p1.setX(4);
    p1.setY(8);
    cout<<p1.getX()<<" "<<p1.getY()<<endl;
}
*/

/*
//4.1

class PointArray {
    int size ;
    Point * points ;
    void resize (int size );
public :
    PointArray ();
    PointArray ( const Point pts [], const int size );
    PointArray ( const PointArray &pv);
    ~ PointArray ();
    void clear ();
    int getSize () const { return size ;}
    void push_back ( const Point &p);
    void insert ( const int pos , const Point &p);
    void remove ( const int pos );
    Point *get( const int pos);
    const Point *get( const int pos) const ;
};
*/

/*
//4.2
class Point {
    int x, y;
public :
    Point (int xx =0, int yy =0) {x = xx; y = yy ;}
    Point ( const Point &pv);
    int getX () const { return x;}
    int getY () const { return y;}
    void setX ( const int xx) {x = xx ;}
    void setY ( const int yy) {y = yy ;}
};
Point :: Point ( const Point & other ) {
    x = other.getX() ;
    y =other.getY() ;
}
//Para q al momento de igual dos points haga una copia correcta

class PointArray {
    int size ;
    Point * points ;
    void resize (int size );
public :
    PointArray ();
    PointArray ( const Point pts [], const int size );
    PointArray ( const PointArray &pv);
    ~ PointArray ();
    void clear ();
    int getSize () const { return size ;}
    void push_back ( const Point &p);
    void insert ( const int pos , const Point &p);
    void remove ( const int pos );
    Point *get( const int pos);
    const Point *get( const int pos) const ;
    void mostrar();
};
ostream& operator<<(ostream &output, const Point &o){
    output << "(" << o.getX()<< "," << o.getY()<<")";
    return output;
}
//sobrecarga del operador <<
PointArray :: PointArray () {
    size = 0;
    points = new Point [0]; // Allows deleting later
}
//constructor sin parametros

PointArray :: PointArray ( const Point ptsToCopy [], const int toCopySize) {
    size = toCopySize ;
    points = new Point [ toCopySize ];
    for(int i = 0; i < toCopySize ; ++i) {
        points [i] = ptsToCopy [i];
    }
}
// constructor con parametros
PointArray :: PointArray ( const PointArray & other ) {
    size = other.size ;
    points = new Point [size];
    for (int i = 0; i < size ; i++) {
        points [i] = other . points [i];
    }
}
//modificaion de la igualacion de Points
PointArray ::~ PointArray () {
    delete [] points ;
}
//destructor

void PointArray :: resize ( int newSize ) {
    Point *pts = new Point [ newSize ];
    int minSize = ( newSize > size ? size : newSize );
    for (int i = 0; i < minSize ; i++)
        pts[i] = points [i];
    delete [] points ;
    size = newSize ;
    points = pts ;
}
//cambiar tamaño del array

void PointArray :: clear () {
    cout<<"Point Array limpiado"<<endl;
    resize (0) ;
}
//limpia el array

void PointArray :: push_back ( const Point &p) {
    resize ( size + 1);
    points [ size - 1] = p;
}
//añadir un elemento al final

void PointArray :: insert ( const int pos , const Point &p) {
    resize ( size + 1);

    for (int i = size - 1; i > pos; i --) {
        points [i] = points [i -1];
    }

    points [pos ] = p;
}
//inserta un elementos en una posicion dada

void PointArray :: remove ( const int pos ) {
    if( pos >= 0 && pos < size ) { // pos < size implies size > 0
    // Shift everything over to the left
        for(int i = pos; i < size - 1; i++) {
            points [i] = points [i + 1];
        }
        resize(size- 1);
    }
}
//elimina el elemento q se encuentre en la posicion dada

Point * PointArray :: get( const int pos) {
    return pos >= 0 && pos < size ? points + pos : NULL ;
}

//obtener posicion de un elemento
const Point * PointArray :: get( const int pos) const {
    return pos >= 0 && pos < size ? points + pos : NULL ;
}
//obtener posicion de un elemento sin hacer modificaciones


void PointArray::mostrar(){
    if(size==0){cout<<"lista vacia"<<endl;}
    else{
        for(int i = 0;i<size; i++) {
        cout<<points[i]<<" ";
        }
    cout<<endl;
    }

}
int main(){
    PointArray A1();
    Point a1(1,2);Point a2(2,3);
    Point lista[]={a1,a2};
    PointArray A2(lista,2);

    A2.mostrar();
    cout<<*(A2.get(0))<<endl;
    Point p(4,5);
    A2.push_back(p);
    A2.push_back(p);
    A2.mostrar();
    Point p2(6,7);
    A2.insert(3,p2);
    A2.mostrar();
    A2.remove(1);
    A2.mostrar();
    PointArray A3=A2;
    A3.mostrar();
    A3.clear();
    A3.mostrar();


}

*/

class Point {
    int x, y;

public :
    Point (int xx =0, int yy =0) {x = xx; y = yy ;}
    int getX () const { return x;}
    int getY () const { return y;}
    void setX ( const int xx) {x = xx ;}
    void setY ( const int yy) {y = yy ;}
};

class PointArray {
    int size ;
    Point * points ;
    void resize (int size );
public :
    PointArray ();
    PointArray ( const Point pts [], const int size );
    PointArray ( const PointArray &pv);
    ~ PointArray ();
    void clear ();
    int getSize () const { return size ;}
    void push_back ( const Point &p);
    void insert ( const int pos , const Point &p);
    void remove ( const int pos );
    Point *get( const int pos);
    const Point *get( const int pos) const ;

};

PointArray :: PointArray () {
    size = 0;
    points = new Point [0]; // Allows deleting later
}
//constructor sin parametros

PointArray :: PointArray ( const Point ptsToCopy [], const int toCopySize) {
    size = toCopySize ;
    points = new Point [ toCopySize ];
    for(int i = 0; i < toCopySize ; ++i) {
        points [i] = ptsToCopy [i];
    }
}
// constructor con parametros
PointArray :: PointArray ( const PointArray & other ) {
    size = other . size ;
    points = new Point [ size ];
    for (int i = 0; i < size ; i++) {
        points [i] = other . points [i];
    }
}
//modificaion de la igualacion de Points
PointArray ::~ PointArray () {
    delete [] points ;
}
//destructor

void PointArray :: resize ( int newSize ) {
    Point *pts = new Point [ newSize ];
    int minSize = ( newSize > size ? size : newSize );
    for (int i = 0; i < minSize ; i++)
        pts[i] = points [i];
    delete [] points ;
    size = newSize ;
    points = pts ;
}
//cambiar tamaño del array

void PointArray :: clear () {
    resize (0) ;
}
//limpia el array

void PointArray :: push_back ( const Point &p) {
    resize ( size + 1);
    points [ size - 1] = p;
}
//añadir un elemento al final

void PointArray :: insert ( const int pos , const Point &p) {
    resize ( size + 1);

    for (int i = size - 1; i > pos; i --) {
        points [i] = points [i -1];
    }

    points [pos ] = p;
}
//inserta un elementos en una posicion dada

void PointArray :: remove ( const int pos ) {
    if( pos >= 0 && pos < size ) { // pos < size implies size > 0
    // Shift everything over to the left
        for(int i = pos; i < size - 2; i++) {
            points [i] = points [i + 1];
        }
        resize ( size - 1);
    }
}
//elimina el elemento q se encuentre en la posicion dada

Point * PointArray :: get( const int pos) {
    return pos >= 0 && pos < size ? points + pos : NULL ;
}

//obtener posicion de un elemento
const Point * PointArray :: get( const int pos) const {
    return pos >= 0 && pos < size ? points + pos : NULL ;
}
//obtener posicion de un elemento sin hacer modificaciones



class Polygon {
protected :
    static int numPolygons ;
    PointArray points ;

public :
    Polygon ( const PointArray &pa);
    //contructor direccion de memoria aun arreglo de puntos ya declarado anteriormente
    Polygon ( const Point points [], const int numPoints );
    //contructor con arreglo de puntos, con su numero de points
    virtual double area () const = 0;
    //metodo area
    static int getNumPolygons () { return numPolygons ;}
    //obtiene el numero de poligonos
    int getNumSides () const { return points . getSize () ;}
    //retorna numero de lados
    const PointArray * getPoints () const { return & points ;}
    //retorna un puntero al arreglo donde se encuentran los puntos
    ~ Polygon () {-- numPolygons ;}
    //destructor
 };



int Polygon :: numPolygons = 0;
//variable de clases

Polygon :: Polygon ( const PointArray &pa) : points (pa) {
    ++ numPolygons ;
 }

Polygon :: Polygon ( const Point pointArr [], const int numPoints ) :
    points ( pointArr , numPoints ) {
    ++ numPolygons ;
 }


 class Rectangle : public Polygon {
public :
    Rectangle ( const Point &a, const Point &b);
    //constructor con dirrecion de memoria puntos ya declarados
    Rectangle ( const int a, const int b, const int c, const int d);
    //contructor con los 4 puntos con coordenadas x y
    virtual double area () const ;
    //metodo area , usada con polimorfismo
};


//geometry.cpp
Point constructorPoints [4];
//lista de puntos
//aqui se guardaran los puntos de los poligonos
Point * updateConstructorPoints ( const Point&p1,const Point&p2,const Point&p3 , const Point &p4 = Point (0 ,0)) {
//tener en cuenta q esta funcion no forma parte de la clase polygon
//el cuarto punto tiene valores por defecto ya que "constructorPoints"
//se usara para triangulos y rectangulos

     constructorPoints [0] = p1;
     constructorPoints [1] = p2;
     constructorPoints [2] = p3;
     constructorPoints [3] = p4;
     return constructorPoints ;
 }
 //crea una lista de puntos
 //actualiza los puntos de un poligono

Rectangle :: Rectangle ( const Point &ll , const Point &ur)
:Polygon ( updateConstructorPoints (ll , Point (ll. getX () , ur. getY ()),ur , Point (ur. getX () , ll. getY ())), 4) {}
//constructor de rectangulo usando el constructor de polygon,q toma dos parametros
//uno es la lista de points "constructorPoints" y el numero de puntos
//para crear el rectangulo solo necesita dos puntos del mismo

Rectangle :: Rectangle ( const int llx , const int lly , const int urx ,const int ury)
 : Polygon ( updateConstructorPoints ( Point (llx , lly), Point (llx ,ury),Point (urx , ury), Point (urx ,lly)), 4) {}
//constructor con 4 enteros, los que represetan los puntos que se utilizan en el
//constructor anterior


 double Rectangle :: area () const {
     //punto 1        punto 2
     //
     //punto 0        punto 3
     int length = points.get(1) ->getY () - points .get (0) ->getY ();
     //punto 1 coordenada y - punto 0 coordenada y
     //para obtener el largo
     int width = points .get (2) ->getX () - points .get (1) ->getX ();
     //punto 2 coordenada x - punto 1 coordenada x
     return abs (( double ) length * width );
 }
//retorna el area del rectangulo
//usa puntero a metodos

class Triangle : public Polygon {
public :
    Triangle ( const Point &a, const Point &b, const Point &c);
    virtual double area () const ;
};
Triangle :: Triangle ( const Point &a, const Point &b, const Point &c)
    : Polygon ( updateConstructorPoints (a, b, c), 3) {}
//constructor que pide 3 puntos como parametros

 double Triangle :: area () const {
    //           point 1
    //
    //point 0                       point 2
    int dx01 = points .get (0) ->getX () - points .get (1) ->getX () ,
        dx12 = points .get (1) ->getX () - points .get (2) ->getX () ,
        dx20 = points .get (2) ->getX () - points .get (0) ->getX ();

    int dy01 = points .get (0) ->getY () - points .get (1) ->getY () ,
        dy12 = points .get (1) ->getY () - points .get (2) ->getY () ,
        dy20 = points .get (2) ->getY () - points .get (0) ->getY ();
        //obtenemos distancias de todos los lados en los ejes x e y
    double a = sqrt ( dx01 * dx01 + dy01 * dy01 ),
           b = sqrt ( dx12 * dx12 + dy12 * dy12 ),
           c = sqrt ( dx20 * dx20 + dy20 * dy20 );
           //calculamos distancia entre dos puntos
           // sqrt((x1-x2)^2+(y1-y2)^2)
    double s = (a + b + c) / 2;
    //semiperimetro
    return sqrt ( s * (s-a) * (s-b) * (s-c) );
    //Fórmula de Herón para hallar el area
 }
//retorna el area del triangulo
 void printAttributes ( Polygon *p) {
    cout << "p’s area is " << p-> area () << ".\n";
    cout << "p’s points are :\n";
    const PointArray *pa = p-> getPoints ();
    for(int i = 0; i < pa -> getSize (); ++i) {
        cout << "(" << pa ->get (i) ->getX () << ", " << pa ->get (i) ->
            getY () << ")\n";
}
}


int main (int argc , char * argv []) {
    cout << " Enter lower left and upper right coords of rectangle as four space separated integers : ";
    int llx , lly , urx , ury;
    cin >> llx >> lly >> urx >> ury;
    Point ll(llx , lly), ur(urx , ury);
    Rectangle r(ll , ur);
    printAttributes (&r);

    cout << " Enter three coords of triangle as six space separated integers : ";
    int x1 , y1 , x2 , y2 , x3 , y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    Point a(x1 , y1), b(x2 , y2), c(x3 , y3);
    Triangle t(a, b, c);
    printAttributes (&t);

    Point a1(0,0), a2(3,2);
    Rectangle e1(a1,a2);
    cout<<e1.area()<<endl;
    Point a3(3,0),a4(3,4);
    Triangle e2(a1,a3,a4);
    cout<<e2.area()<<endl;
return 0; }
