#include <iostream>
#include <cmath>

int main(){
    double x = 8.5;
    double y = 6.6;
    double z;

    // z = std::max(x,y);
    // z = std::min(x,y);
    // z = pow(2,3);
    // z = sqrt(9);
    // z = abs(-3);
    // z = round(x);
    // z = floor(x);
    z = ceil(x);

    std::cout << z << std::endl;
    return 0;
}