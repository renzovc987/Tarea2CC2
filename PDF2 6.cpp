#include <iostream>
using namespace std;
//6 ARRAY OPERATIONS
//6.1
//la funcion recibe un array y su respectivo tamaño e imprime despues de cada elemento una coma.
void  print_Array ( const  int arr [] , const  int len ) {
  for ( int i =  0; i <  len ; ++ i) {
  cout<<arr[i];
    if(i<len-1)  {
        cout<<",";
    }
  }
}
//6.2
void reversa(int numbers[], const int numbersLen) {
 for(int i = 0; i < numbersLen / 2; ++i) {
 int tmp = numbers[i];
 int indexFromEnd = numbersLen -i -1;
 numbers[i] = numbers[indexFromEnd];
 numbers[indexFromEnd] = tmp;
 }
  }
//6.3
void transpose(const int input[2][3],int output[3][2]) {
 for(int i = 0; i < 2; ++i) {
 for (int j = 0; j < 3; ++j) {
 output[j][i] = input[i][j];
 }
 }
 }
//6.4
//Se devolverá un puntero al primer elemento de la matriz, pero la matriz se habría salido del alcance,
// haciendo que el puntero sea inválido.
//si se compila con el mismo nombre de la funcion anterior habra un error de compilacion.
//por motivo de la ambiguedad.
//6.5
void  reversap ( int numbers [] , const  int numbersLen ) {
 for ( int i =  0; i <  numbersLen / 2; ++ i) {
      int  tmp  =  *( numbers  +  i);
      int  indexFromEnd  =  numbersLen  - i - 1;
     *( numbers  +  i) =  *( numbers  +  indexFromEnd );
     *( numbers  +  indexFromEnd ) =  tmp ;
          }
 }


int main()
{
    int arreglo[]={1,2,3,4,5};
    int arreglo2[]={5,6,7,8,9};
    int M[2][3],N[3][2];
    M[0][0]=1;
    M[0][1]=2;
    M[0][2]=3;
    M[1][0]=4;
    M[1][1]=5;
    M[1][2]=6;
    cout<<"Arreglo con comas"<<endl;
    print_Array(arreglo,5);
    cout<<endl;
    reversa(arreglo,5);
    cout<<"Arreglo Invertido"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arreglo[i]<<" ";
    }
    cout<<endl;
    cout<<"Transpuesta de una Matriz"<<endl;
    transpose(M,N);
    for(int j=0;j<3;j++)
    {
        for(int k=0;k<2;k++)
        {
            cout<<N[j][k]<<" ";
        }
        cout<<endl;
    }
    reversap(arreglo2,5);
    cout<<"Arreglo Invertido con punteros"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arreglo2[i]<<" ";
    }
}
