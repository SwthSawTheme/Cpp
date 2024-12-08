#include<iostream>
using std::cout;
using std::endl;
using std::cin;

// && - AND
// || - OR
// ! - NOT

int main(){
    double peso;
    double altura;
    int idade;
    
    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "Digite seu peso: ";
    cin >> peso;

    cout << "Digite sua altura: ";
    cin >> altura;

    if (altura > 1.6 && peso >= 75.0) {
        cout << "Voce esta apto a servir!";
    } else if ( altura >= 1.80 && idade > 20) {
        cout << "Voce nao so esta apto, voce vai servir";
    } else if (altura < 1.5 || peso <= 60.0) {
        cout << "Voce nao pode servir";
    } else {
        cout << "Voce digitou valores errado!";
    }
    return 0;
}