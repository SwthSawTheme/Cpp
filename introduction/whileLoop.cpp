#include <iostream>

int main() {
    std::string name;
    // Formas de usar loop while
    while (name.empty()) {
        std::cout << "Digite o seu nome: ";
        std::getline(std::cin,name);
    }
    return 0;
}