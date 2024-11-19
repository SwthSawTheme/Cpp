#include <iostream>

int main(){
    double x = 8.5;
    double y = 6.6;
    double z;

    // z = std::max(x,y);
    z = std::min(x,y);

    std::cout << z << std::endl;
    return 0;
}