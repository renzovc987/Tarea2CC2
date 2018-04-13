#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;
//la funcion devuelve el argumento multiplicado por dos en caso que no posea argumento se le asignara;
//5 como valor por default y realizara la operacion con dicho valor;
void f( const int a = 5)
{
   std :: cout << a*2 << '\n';
}
//3 FIX THE FUNCION
//3.1
//El error era que el procedimiento printNum iba debajo de la funcion main
//Por ende no detectaba a la funcion declarada en main
void printNum(int number) { std::cout << number<<endl; }
//3.2
//El procedimiento no tiene el argumento number por ende dará error
void printNum2(int number) { std::cout << number <<endl; }
//3.3
//Para que el resultado de 70 en la funcion pricipal se debe realizar un paso por referencia del argumento
void doubleNumber( int &num ) { num  =  num  * 2;}
//3.4
//Para que la funcion retorne abs(x-y) se debe retornar algo ya sea diff o abs(x-y)
int difference( const int x, const int y) {
 int diff = abs(x -y);
 return diff;
}
//3.5
// la falta de un argumento impide que se imprima la suma de 3 enteros. Se tiene que agregar el
//argumento faltante
int sum ( const  int x,  const  int y,const int z)  {
     return  x  +  y+z;
}
//4 SUMS
//4.1
int sum( const  int x,  const  int y)  {
          return  x  +  y;
}
double sum( const  double x,  const double y)  {
          return  x  +  y;
}
//4.2
//Mezclar y hacer coincidir una int con un doble hace que sea ambiguo a cuál desea llamar.
//4.3
int sum3( const  int x,  const  int y,  const  int z)  {
            return  x  +  y  +  z;
}
int sum4( const  int x,  const  int y,  const  int z,  const  int w)  {
            return  x  +  y  +  z  +  w;
}
//4.4
//Si se llamaban a las dos con el mismo nombre habria un error por la iguladad de nombres y por los mismos parametros pero con valores
//por default
int sum4d( const  int a=5,  const  int b=5,  const  int c=0,  const  int d=0)  {
            return  a  +  b  +  c  +  d;
}
//4.5
int sumanenteros(int numeros[],int n)
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        s+=numeros[i];
    }
    return s;
}
//4.6
int sumanenteros2(int numeros[],int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return numeros[n-1]+sumanenteros2(numeros,--n);
    }
}
//5 CALCULATE PI
//5.3
//en este caso se aplicaran n lanzamientos de dardos y aplicando la distancia euclidiana veremos cuantos dan al centro.Este valor tiene que ser aproximado a pi.
double compute_Pi (const int n){
//inicializa el generador de numeros aleatorias
//esta instruccion hace que la secuencia no se repita.
 srand ( time (0) );
 int  darts_In_Circle =  0;
 for ( int i =  0; i <  n; ++ i) {
 double  x  =  rand () / ( double ) RAND_MAX , y  =  rand () / ( double ) RAND_MAX ;
      if( sqrt ( x* x  +  y* y)  <  1  ) {
              ++ darts_In_Circle ;
          }
 }
   return  darts_In_Circle  / static_cast < double >( n)  *  4;
//

}
//VARIABLES GLOBALES
int a=123;
const int ARRAY_LEN = 10;
int main()
{
  int numero=35,ai=9,bi=10;
  int numbers[]={1,2,3,4,5};

  double da=48,db=3;
  f (1) ;
  f(a);
  int b = 3;
  f(b);
  int a = 4;
  f(a);
  f();
  printNum(35) ;
  printNum2(46);
  doubleNumber(numero);
  cout<<numero<<endl;
  std :: cout << difference (24 , 1238)<<endl ;
  std :: cout  <<  sum (1 , 2 , 3)<<endl;  // Should  print  6
//3.6
//para que imprima 10 0 se le debe asignar el operador * a yPtr porque cumple la funcion de puntero
    int arr [ ARRAY_LEN ] = {10};                                                              // other elements
    int * xPtr = arr;
    int *yPtr = arr + ARRAY_LEN - 1;
    std :: cout << * xPtr << " " << * yPtr<<endl ;
    cout<<"ai + bi = "<<sum(ai,bi)<<endl; //Imprime 19
    cout<<"da + db = "<<sum(da,db)<<endl; //Imprime 51
    cout<<"Suma de 1 2 3 es "<<sum3(1,2,3)<<endl;
    cout<<"Suma de 1 2 3 4 es "<<sum4(1,2,3,4)<<endl;
    cout<<"Suma de 1 2 3 4 es "<<sum4d(1,2,3,4)<<endl;
    cout<<"Suma Iterativa "<<sumanenteros(numbers,5)<<endl;
    cout<<"Suma Recursiva "<<sumanenteros2(numbers,5)<<endl;
//5.1
//Se asignan coordenadas x e y aleatorias del lanzamiento de un dardo.
double x = rand () / ( double ) RAND_MAX , y = rand () / ( double ) RAND_MAX ;
//5.2
int  dartsInCircle  =  0;
//En este caso se aplicaran 3 lanzamientos
for ( int i =  0; i <  3; ++ i) {
    double  x  =  rand () / ( double ) RAND_MAX , y  =  rand () / ( double ) RAND_MAX ;
    //Distancia Euclidiana sqrt ( x* x  +  y* y)
    //si la distancia euclidiana es menor a 1 es que el dardo dio en el centro.
    if( sqrt ( x* x  +  y* y)  <  1  ) {
            ++ dartsInCircle ;
      }
 }




}

