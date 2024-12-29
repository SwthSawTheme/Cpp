#include <iostream>

int main(){
    std::string name;

    if (name.empty()){
        std::cout << "Digite seu nome: ";
        std::cin >> name;
    }

    return 0;
}