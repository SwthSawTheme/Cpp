#include <iostream>

int main(){

    int questions = 100;
    int types = 20;
    // É possivel converter um tipo apenas acrescentando ()antes do dado e escolhendo o tipo que quer converter
    double scores = (questions/ types) * (int)1.5;

    std::cout << scores << std::endl;
    return 0;
}