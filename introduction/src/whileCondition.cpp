#include <iostream>

int main() {
    int a;
    int b;
    int c;

    while (c < 200) {

        std::cout << "######## Teste ########" << std::endl;
        std::cout << "Digite um valor para A: ";
        std::cin >> a;

        std::cout << "Digite um valor para B: ";
        std::cin >> b;

        c = a * b;

        std::cout << "O resultado e " << c << std::endl;

    }
    std::cout << "Voce saiu do loop";
    return 0;
}