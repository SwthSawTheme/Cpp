#include <iostream>

int main(){
    // Tornando a variavel constante
    const double pi = 3.14159;
    double radius = 10;
    double circumference = 2* pi * radius;

    const long long LIGHT_SPEED = 283773777723;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    std::cout << circumference << std::endl;
    return 0;
}