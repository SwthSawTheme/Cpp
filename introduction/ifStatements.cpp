#include <iostream>

int main() {
    int age;

    std::cout << "Digite sua idade: ";
    std::cin >> age;

    if (age >= 100) {
        std::cout << "Voce esta a cima da populacao mundial!";
    }
    else if (age >= 18){
        std::cout << "Voce e maior de idade";
    }
    else if (age < 8) {
        std::cout << "Voce e muito novo!";
    }
    else {
        std::cout << "Voce e menor de idade";
    }

    return 0;
}