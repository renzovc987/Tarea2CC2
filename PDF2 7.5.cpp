#include <iostream>

using namespace std;

int main()
{
    //7.5
    char *oddOrEven = "Never odd or even ";
    char *nthCharPtr = &oddOrEven[5];
    nthCharPtr = oddOrEven + 3;
    //Entregara el mismo resultado que nthCharPtr -= 2;
    cout<<*nthCharPtr<<endl;
    char **pointerPtr = &nthCharPtr;
    //Entregara el espacio en la memoria de nthCharPtr
    cout <<pointerPtr<<endl;
    //Entregara el caracter que apunta nthCharPtr
    cout << **pointerPtr<<endl;
    //Entregara el indice del caracter que apunta nthCharPtr
    cout << nthCharPtr -oddOrEven;

}
