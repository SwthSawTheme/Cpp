#include <iostream>

int main() {
    std::string name;

    std::cout << "Digite seu nome: ";
    std::getline(std::cin,name);

    if (name.length() > 12){
        std::cout << "Seu nome nao pode ter mais de 12 caracteres!";
    } else {
        std::cout << "Bem vindo " << name;
    }
    return 0;
}