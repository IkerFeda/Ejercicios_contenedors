#include "iostream"
#include "algorithm"
#include "vector"

int main (){

    std::vector<int> numeros{10,56,7,45,3,2,100};
    std::sort(numeros.begin(), numeros.end());
    auto maximo = std::max_element(numeros.begin(), numeros.end());

    std::cout << "Vector ordenado: ";
    for (const auto& numero : numeros) {
        std::cout << numero << " ";
    }
    std::cout << std::endl;

    std::cout << "Elemento mas grande: " << *maximo << std::endl;

    return 0;
}