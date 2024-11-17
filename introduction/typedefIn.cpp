#include <iostream>
#include <cmath>

// typedef comumente usado para nomeação de palavras reservadas

// typedef std::string texto;
// typedef int inteiro;
// typedef bool boleano;
// typedef float Ponto_Flutuante;
// typedef double numeroLongoLongo;
// typedef long long numeroLongo;

// using pode ser uma forma alternativa de apelidar uma palavra reservada

using std::cout;
using std::endl;
using text = std::string;

int main(){
    int numero = 20;
    int numero2 = 30;

    int verdade = true;
    text num = " Numero muito, muito, muito grande!";
    double somaPotenciada = (pow(numero,80) * pow(numero2,49))/ 2;
    cout << somaPotenciada << num << endl;
    return 0;
}