#include <iostream>

int main()
{
    int rows;
    int columns;
    char symbol;

    std::cout << "Digite a quantidade de linhas: ";
    std::cin >> rows;

    std::cout << "Digite a quantidade de colunas: ";
    std::cin >> columns;

    std::cout << "Digite o simbolo: ";
    std::cin >> symbol;

    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= columns; j++){
            std::cout << symbol;
        }
        std::cout << "\n";
    }

    return 0;
}