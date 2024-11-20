#include <iostream>


int opSum(double num1, double num2) {
    return num1 + num2;
}

int opSub(double num1, double num2) {
    return num1 - num2;
}

int opMult(double num1, double num2) {
    return num1 * num2;
}

int opDiv(double num1, double num2) {
    return num1 / num2;
}

int main(){
    char op;
    double num1;
    double num2;

    std::cout << "======== Calculadora ========" << std::endl;

    std::cout << "Digite um operador ( * / + -): ";
    std::cin >> op;

    switch (op){

        case '*':
            std::cout << "Digite um numero: ";
            std::cin >> num1;
            std::cout << "Digite outro numero: ";
            std::cin >> num2;

            std::cout << "O resultado de " << num1 << "*" << num2 << " = " << opMult(num1,num2) << std::endl;
            break;

        case '/':
            std::cout << "Digite um numero: ";
            std::cin >> num1;
            std::cout << "Digite outro numero: ";
            std::cin >> num2;

            std::cout << "O resultado de " << num1 << "/" << num2 << " = " << opDiv(num1,num2) << std::endl;
            break;

        case '+':
            std::cout << "Digite um numero: ";
            std::cin >> num1;
            std::cout << "Digite outro numero: ";
            std::cin >> num2;

            std::cout << "O resultado de " << num1 << "+" << num2 << " = " << opSum(num1,num2) << std::endl;
            break;

        case '-':
            std::cout << "Digite um numero: ";
            std::cin >> num1;
            std::cout << "Digite outro numero: ";
            std::cin >> num2;

            std::cout << "O resultado de " << num1 << "-" << num2 << " = " << opSub(num1,num2) << std::endl;
            break;
        default:
            std::cout << "Digite um operador valido ( * / + -)!" << std::endl;
    }
    
    std::cout << "=============================";
}
