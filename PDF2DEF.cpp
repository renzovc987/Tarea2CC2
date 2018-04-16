#include <iostream>
#include <cstdlib> // contains some math functions
#include <cmath>
using namespace std;
/*
#2

void f( const int a = 5)
{
cout << a*2 <<endl;
 }

 int a = 123;


 int main ()
 {
 f (1) ;
 f (a ) ;
 int b = 3;
 f (b ) ;
 int a = 4;
 f (a ) ;
 f();
 }
// imprime 2 246 6 8 10 respectivamente
*/



//#3.1
/*int main () {


printNum (35) ;

return 0;

 }
void printNum (int number ) { std :: cout << number ; }// el error es que la funcion printNum debe ir antes de la funcion principal y recien en ese caso imprimira el numero */

//#3.2
/*void printNum () { cout << number ; };

int main () {
int number = 35;
printNum ( number );
return 0;
}*/
//El error seria que  funcion printNum no tiene ninugn parametro de entrada pero en la func.principal si recibe parametros al llamarla.


//#3.3
/*void doubleNumber (int num ) {num = num * 2;}

int main () {
int num = 35;
doubleNumber (num ) ; cout << num ; // Should print 70
return 0;
}
//No efectúa la funcion ya que el cambio se realiza dentro de la funcion pero al imprimir el numero no lo ha modificado fuera del ambito de la funcion, por eso va a seguir imprimiendo 35.
*/


//#3.4
/*int difference ( const int x , const int y) {
int diff = abs ( x - y ) ; // abs ( n) returns absolute value of n
}

int main () {
    cout << difference (24 , 1238) ;
    return 0;
}
//No va a imprimir la diferencia debido a que la funcion difference no devuelve un valor por ende no va a imprimir la diferencia.
*/


//#3.5
/*int sum ( const int x, const int y ) {
return x + y ; }

int main () {
    cout << sum (1, 2, 3); // Should print 6
    return 0;
}
//No va a imprimir la suma que seria 6, porque la funcion solo recibe dos parametros como entrada no 3.
*/



//#3.6
/*const int ARRAY_LEN = 10;

int main () {
    int arr [ ARRAY_LEN ] = {10}; // Note implicit initialization of other elements
    int *xPtr = arr ;yPtr = arr + ARRAY_LEN - 1;
    cout<< *xPtr<< " " << *yPtr ; // Should output 10 0
    return 0; }
//No va a imprimir debido a que yPtr no es un puntero de tipo entero.
*/



/*4.1
int sum ( const int x , const int y ) {
return x + y ;}//suma de enteros

double sum ( const double x , const double y ) {
return x + y ;}//suma de valores double

int main(){
cout<<sum(4,5)<<endl;
cout<<sum(4.56,5.7)<<endl;

}

*/


/*
//4.3
int sum ( const int x , const int y , const int z ) {
return x + y + z ;
 }//suma de 3 enteros


int sum ( const int a , const int b , const int c , const int d ) {
return a + b + c + d ;

}//suma de cuatro enteros

int main(){
cout<<sum(4,5,6)<<endl;
cout<<sum(8,9,7,6)<<endl;
}*/

/*
//4.4
int sum( const int a, const int b, const int c = 0 , const int d = 0)
{
 return a + b + c + d ;
} //Suma de cuatro enteros o de dos enteros ya que los dos ultimos valores de entrada ya estan declarados por defecto, eso significa que al llamar a la funcion se pueden ingresar solo dos valores o 4
 int main(){
 cout<<sum(4,8)<<endl;
 cout<<sum(4,5,6,7)<<endl;

 }
*/


/*
//4.5
int sum( const int numbers [], const int numbersLen ) {
    int sum = 0;
    for(int i = 0; i < numbersLen ; ++i ) {
    sum += numbers [ i];
    } return sum;
    }// Suma de n enteros mediante una lista que los contiene.

int main(){
    int a[5]={1,2,3,4,5};
    cout<<sum(a,5)<<endl;
}
*/


/*
//4.6
int sum ( const int numbers [] , const int numbersLen ) {
    return numbersLen == 0 ? 0 : numbers [0] + sum ( numbers + 1 , numbersLen - 1) ;
}//Suma de n enteros de forma recursiva

int main(){
    int a[5]={1,2,3,4,5};
    cout<<sum(a,5)<<endl;

}
*/



/*
//#5.1
int main(){
double x = rand () / ( double ) RAND_MAX , y = rand () / ( double ) RAND_MAX ;
//Genera valores entre 0 y 1
cout<<x<<" "<<y<<endl;
}
*/


/*
//5.2
int main(){
int dartsInCircle = 0;
for(int i = 0; i < 5 ; ++ i ) {
    //A i le pongo enor que 5 porque es el numero de lanzamientos que considero yo (puede ser cualquier numero).
    double x = rand () / ( double ) RAND_MAX , y = rand () / ( double )RAND_MAX ;
    if( sqrt ( x * x + y * y ) < 1 ) {
        ++ dartsInCircle ; } }
cout<<dartsInCircle;
//Verifica cuantos dardos entan dentro del circulo
}
*/


/*
//#6.1
void printArray ( const int arr [], const int len ) {
    for(int i = 0; i < len; ++i ) {
        cout << arr [ i];
        if( i < len -1) { cout << ", ";
        }
    }
}
 //Imprime elementos de un arreglo con una coma en cada procedimiento
int main(){
    int a[5]={1,2,3,4,5};
    printArray(a,5);


}
*/

/*
//#6.2
void reverse (int numbers [] , const int numbersLen ) {
    for(int i = 0; i < numbersLen / 2; ++ i ) {
        int tmp = numbers [ i ];
        int indexFromEnd = numbersLen - i - 1;
        numbers [ i ] = numbers [ indexFromEnd ];
        numbers [ indexFromEnd ] = tmp ;

    }
}
//Invierte los elementos de un arreglo

int main(){
    int a[5]={1,2,3,4,5};
    reverse(a,5);
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }


}
*/


/*
 //#6.3
 void transpose(int input[][20],int output[][20],int LENGTH,int WIDTH) {
        for(int i = 0; i < WIDTH ; ++ i ) {
            for (int j = 0; j < LENGTH ; ++ j ) {
                output [ j ][ i ] = input [ i ][ j ];

                }

        }
}

//Va a transponer una matriz en otras palabras va a generar una matriz pero con el orden filas=columnas y columnas=filas.
 int main(){
    int f,c,n;
    int a[20][20];
    int b[20][20];
    cin>>f>>c;
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
             cin>>n;
			a[i][j]=n;
		}
	}
	cout<<endl;
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cout<<a[i][j]<<' ';
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<endl;

	transpose(a,b,c,f);
	for(int i=0;i<c;i++){
		for(int j=0;j<f;j++){
			cout<<b[i][j]<<' ';
		}
		cout<<endl;
	}

}
*/






/*
//#6.4
 void reversee (int numbers [] , const int numbersLen ) {
    for(int i = 0; i < numbersLen / 2; ++ i ) {
        int tmp = *( numbers + i ) ;
        int indexFromEnd = numbersLen - i - 1;
        *( numbers + i ) = *( numbers + indexFromEnd ) ;
        *( numbers + indexFromEnd ) = tmp ;
    }
}
//Invierte una lista usando punteros.
int main(){
    int a[6]={1,2,3,4,5,6};
    reversee(a,6);
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }
}
*/


/*
//#7.1
int stringLength( const char *str) {
    int length = 0;
    while (*(str + length) != '\0') {
        ++length;
    }
return length;
}
int main(){
    char *a=new char(20);
    a="HolaAmigo";
    cout<<stringLength(a);
    delete a;

}

 //Devuelve el tamaño de una cadena
 */

/*
//#7.2
void  swap1( int &x,  int &y)  {
    int  tmp  =  x;
    x  =  y;
    y  =  tmp ;
}
//Intercambia los valores de dos variables

int main(){
    int x=6;
    int y=7;
    cout<<"valores iniciales "<<x<<" "<<y<<endl;
    swap1(x,y);
    cout<<"valores intercambiados "<<x<<" "<<y;


}
*/



/*
 //#7.3
 void  swap2 ( int *x,  int *y)  {
    int  tmp  =  *x;
    *x  =  *y;
    *y  =  tmp ;
}
//Intercambia los valores de dos variables usando punteros
int main(){
    int *x=new int(1);
    int *y=new int(1);
    *x=6;
    *y=7;
    cout<<"valores iniciales "<<*x<<" "<<*y<<endl;
    swap2(x,y);
    cout<<"valores intercambiados "<<*x<<" "<<*y;

}
*/



/*
 //#7.4
void swap3(int **x, int **y) {
 int *tmp = *x;
 *x = *y;
 *y = tmp;
 }
//Intercambia los valores de dos variables usando puntero dobles.
int main(){
    int a=5;int b=6;
    int *p1=&a; int *p2=&b;
    int **x=&p1;
    int **y=&p2;
    cout<<"valores iniciales "<<**x<<" "<<**y<<endl;
    swap3(x,y);
    cout<<"valores intercambiados "<<**x<<" "<<**y;

}
*/


/*
 //#7.5

    int main(){
     char *oddOrEven=new char(9);
     oddOrEven="HolaAmigoLuis";
     char *nthCharPtr = &oddOrEven[5];//Inicializa el puntero en la 6 posicion
	 nthCharPtr -= 2; //or nthCharPtr = oddOrEven + 3;// El puntero ahora apunta a la 4 posicion
	 cout << *nthCharPtr<<endl;//Imprime el contenido que guarda nthCharPtr
	 char **pointerPtr = &nthCharPtr; //Crea un puntero doble que apunta a la direccion de memoria de nthCharPtr
	 cout << pointerPtr<<endl;//Imprime la direccion de memeoria que almacena el puntero
	 cout << **pointerPtr<<endl;//Imrime el contenido que alamcena pointerPtr
	 nthCharPtr++; //Avanza a la siguiente posicion
    cout << nthCharPtr - oddOrEven<<endl;//Imprime cuanto a avanzado el puntero nthCharPtr


    }

*/
