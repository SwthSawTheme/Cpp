#include <iostream>

// Essa é uma forma não recomendada para o caso If else
// Vamos aprender o Switches

int main() {
    int month;

    std::cout << "Digite entre (1 e 12): ";
    std::cin >> month;

    if (month == 1) {
        std::cout << "Janeiro";
    } else if (month == 2) {
        std::cout << "Fevereiro";
    } else if (month == 3) {
        std::cout << "Marco";
    } else if (month == 4){
        std::cout << "Abril";
    } else if (month == 5){
        std::cout << "Maio";
    } else if (month == 6){
        std::cout << "Junho";
    } else if (month == 7){
        std::cout << "Julho";
    } else if (month == 8){
        std::cout << "Agosto";
    } else if (month == 9){
        std::cout << "Setembro";
    } else if (month == 10){
        std::cout << "Outubro";
    } else if (month == 11){
        std::cout << "Novembro";
    } else if (month == 12){
        std::cout << "Dezembro";
    } else {
        std::cout << "Digite um numero entre 1 e 12!";
    }
}