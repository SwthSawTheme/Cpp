#include <iostream>

int main(){

    int questions = 100;
    int types = 20;

    double scores = (questions/ types) * (int)1.5;

    std::cout << scores << std::endl;
    return 0;
}