#include <iostream>

int main() {
    using std::cout;
    using std::endl;
    using std::string;

    string name;
    string age;
    
    // Exibe uma mensagem no console pedindo o nome do usuário
    cout << "Qual o seu nome?: " << endl;
    // Lê a entrada do usuário (incluindo espaços em branco) e armazena na variável 'name'
    std::getline(std::cin >> std::ws, name);

    // Exibe uma mensagem no console pedindo a idade do usuário
    cout << "Qual a sua idade?: " << endl;
    // Lê a entrada do usuário (incluindo espaços em branco) e armazena na variável 'age'
    std::getline(std::cin >> std::ws, age);

    return 0;
}