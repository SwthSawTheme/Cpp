#include <iostream>
#include <cmath>

int main(){
    double a;
    double b;
    double c;

    std::cout << "Digite o valor para A: " << std::endl;
    std::cin >> a;
    std::cout << "Digite o valor para B: " << std::endl;
    std::cin >> b;

    c = sqrt(pow(a,2) + pow(b,2));

    std::cout << "O valor da hypotenusa e: " << c << std::endl;
    return 0;  

}