#include <iostream>

int main(){

    for (int i = 0; i <= 20; i++){
        
        if (i == 10){
            continue;
        }

        if (i == 18){
            break;
        }
        std::cout << "Teste de producao" << i << "\n";
    }

    return 0;
}