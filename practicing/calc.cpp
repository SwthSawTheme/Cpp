#include <iostream>

// Função para somar dois números
int opSum(double num1, double num2) {
    return num1 + num2;
}

// Função para subtrair dois números
int opSub(double num1, double num2) {
    return num1 - num2;
}

// Função para multiplicar dois números
int opMult(double num1, double num2) {
    return num1 * num2;
}

// Função para dividir dois números
int opDiv(double num1, double num2) {
    return num1 / num2;
}

int main() {
    // Variáveis para armazenar o operador e os dois números de entrada
    char op;
    double num1;
    double num2;

    // Exibe o título do programa
    std::cout << "======== Calculadora ========" << std::endl;

    // Solicita ao usuário o operador desejado
    std::cout << "Digite um operador ( * / + -): ";
    std::cin >> op;

    // Estrutura de decisão para executar a operação escolhida
    switch (op) {

        case '*': // Caso o operador seja multiplicação
            std::cout << "Digite um numero: ";
            std::cin >> num1;
            std::cout << "Digite outro numero: ";
            std::cin >> num2;

            // Exibe o resultado da multiplicação
            std::cout << "O resultado de " << num1 << "*" << num2 << " = " << opMult(num1, num2) << std::endl;
            break;

        case '/': // Caso o operador seja divisão
            std::cout << "Digite um numero: ";
            std::cin >> num1;
            std::cout << "Digite outro numero: ";
            std::cin >> num2;

            // Exibe o resultado da divisão
            std::cout << "O resultado de " << num1 << "/" << num2 << " = " << opDiv(num1, num2) << std::endl;
            break;

        case '+': // Caso o operador seja soma
            std::cout << "Digite um numero: ";
            std::cin >> num1;
            std::cout << "Digite outro numero: ";
            std::cin >> num2;

            // Exibe o resultado da soma
            std::cout << "O resultado de " << num1 << "+" << num2 << " = " << opSum(num1, num2) << std::endl;
            break;

        case '-': // Caso o operador seja subtração
            std::cout << "Digite um numero: ";
            std::cin >> num1;
            std::cout << "Digite outro numero: ";
            std::cin >> num2;

            // Exibe o resultado da subtração
            std::cout << "O resultado de " << num1 << "-" << num2 << " = " << opSub(num1, num2) << std::endl;
            break;

        default: // Caso o operador digitado seja inválido
            std::cout << "Digite um operador valido ( * / + -)!" << std::endl;
    }

    // Exibe o final do programa
    std::cout << "=============================";
}
