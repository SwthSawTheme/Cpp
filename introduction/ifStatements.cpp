#include <iostream>

int main() {
    int age;

    std::cout << "Digite sua idade: ";
    std::cin >> age;

    if (age >= 18) {
        std::cout << "Voce e maior de idade";
    } else {
        std::cout << "Voce e menor de idade";
    }

    return 0;
}