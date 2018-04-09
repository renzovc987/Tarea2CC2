#include <iostream>

using namespace std;
//COMO VARIABLE GLOBAL TENEMOS NUESTRA CADENA VOWELS QUE POSEERA LAS VOCALES.
const string vowels = " aeiou ";
//Se define la funcion pigLatinify que tendra como argumento una cadena
string pigLatinify ( const string s) {
    //Si el tamaño de la cadena es 0 no retornara nada.
    if(s. size () == 0) {
        // oops , empty string
        return s;
    }
 //De lo contrario se establecen los siguientes parametros:
 //Si la cadena empieza con qu terminara con quay y empieza con las letras que siguen despues de qu
    if(s. find ("qu") == 0) { // Starts with "qu"
        return s. substr (2, s. size () -2) + "-" + s. substr (0, 2) + "ay";}
    //Si la cadena empieza con vocal terminara en way y empezara con toda la cadena
    else if( vowels . find (s [0]) != string :: npos ) { // Starts with a vowel
            return s + " way";}
    //Si la cadena empieza de otra forma terminara en (primera _letra)ay y empezara conlas letras que le siguen a la primera
    else {
            return s. substr (1, s. size () -1) + "-" + s[0] + "ay";}
}
int main()
{
    string cade1;
    cade1="juan";
    cout<<pigLatinify(cade1)<<endl;
}
