#include <iostream>

namespace first{
    int x = 2;
}

namespace second{
    int x = 3;
}

void funcName(){
    using namespace std;
    cout << "Test Using Namespace in function" << endl;
}

int main(){
    using namespace second;

    int x = 0;

    std::cout << x << std::endl;
    std::cout << first::x << std::endl;
    std::cout << second::x << std::endl;
    funcName();

    return 0;
}