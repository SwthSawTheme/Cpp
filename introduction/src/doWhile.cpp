#include <iostream>

int main(){
    
    int number;

    do {
        std::cout << "Digite um numero positivo: ";
        std::cin >> number;
    }while (number < 0);
    
    std::cout << "O numero digitado e " << number;

    return 0;
}