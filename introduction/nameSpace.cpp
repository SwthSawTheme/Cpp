#include <iostream>

namespace first{
    int x = 2;
}

namespace second{
    int x = 3;
}

int main(){
    int x = 0;

    std::cout << first::x << std::endl;
    return 0;
}