#include <iostream>

using namespace std;
//7 POINTERS AND STRINGS
//7.1
//Esta funcion sirve para encontrar el tamaño de una cadena usando punteros.
int stringLength( const char *str) {
 int length = 0;
 while (*(str + length) != '\0') {
    // si se cambia el ++length por length++ no ocurre nada, el resultado es el mismo;
  ++length;
 }
 return length;
  }
//7.2
  // si la funcion queda con el nombre de swap el programa se compila igual,pero lo realiza mediante una accion predefinida
  // no estaria usando la funcion creada.
void  swap1( int &x,  int &y)  {
    int  tmp  =  x;
    x  =  y;
    y  =  tmp ;
}
//7.3
void  swap2 ( int *x,  int * y)  {
    int  tmp  =  * x;
    * x  =  * y;
    * y  =  tmp ;
}
//7.4
 void swap3(int **x, int **y) {
 int *tmp = *x;
 *x = *y;
 *y = tmp;
 }
int main()
{
    char *cadena;
    int a,b,k1=9,k2=8,k33=33,k44=44;
    int *c=&k1;
    int *d=&k2;
    int *k3=&k33;
    int *k4=&k44;
    int **p1=&k3;
    int **p2=&k4;
    a=5;
    b=4;
    cadena="Hola Renzo";
    cout<<"La longitud de la cadena es "<<stringLength(cadena)<<endl;
    swap1(k1,k2);
    cout<<"La variable a cambia a "<<*c<<" La variable b cambia a "<<*d<<endl;
    swap2(c,d);
    cout<<"La variable c cambia a "<<k1<<" La variable d cambia a "<<k2<<endl;
    swap3(p1,p2);
    cout<<"La variable p1 cambia a "<<*k3<<" La variable p2 cambia a "<<*k4<<endl;
}
