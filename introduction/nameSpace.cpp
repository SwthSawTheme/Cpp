#include <iostream>

namespace first{
    int x = 2;
}

namespace second{
    int x = 3;
}

void funcName(){
    using namespace std;
    // Usando namespace para deixar de usar o std
    cout << "Test Using Namespace in function" << endl;
}

void funcString(){
    using std::cout;
    using std::endl;
    using std::string;

    string name = "Saw";

    cout << name << endl;
}

int main(){
    using namespace second;

    int x = 0;

    // chamando a mesma variavel "x" com 3 formas distintas
    std::cout << x << std::endl;
    std::cout << first::x << std::endl;
    std::cout << second::x << std::endl;
    funcName();
    std::cout << "---------------" << std::endl;
    funcString();

    return 0;
}
