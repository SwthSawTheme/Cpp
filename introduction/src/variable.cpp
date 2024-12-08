#include <iostream>

int main(){

    //inteiros
    int age = 25;
    int year = 2024;
    int days = 7.5;

    //double (numeros decimais)
    double price = 19.99;
    double temperatue = 31.2;
    double tileset = 2.2;

    // Unico caracter
    char grade = 'A';
    char initial = 'b';
    char singReal = 'R';

    // Valor Boleano
    bool student = false;
    bool power = true;
    bool forSale = true;

    //string objetos que representam uma sequencia de caracteres
    std::string name = "Saw";
    std::string movie = "It - A Coisa";
    std::string day = "Friday";
    std::string address = "123 Fake st.";

    std::cout << "Hello" << name << std::endl;
    std::cout << "O filme e " << movie << std::endl;
    std::cout << "Hoje e " << day << std::endl;
    std::cout << address << std::endl;
    std::cout << days << std::endl;
    std::cout << year << std::endl;
    std::cout << price << std::endl;
    std::cout << temperatue << std::endl;
    std::cout << tileset << std::endl;
    return 0;
}