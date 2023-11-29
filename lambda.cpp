#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>

int main() {

    auto cuadrado = [](int num) { return num * num; };
    std::vector<int> numeros = {1, 2, 3, 4, 5};

    std::for_each(numeros.begin(), numeros.end(), [&](int num) {
        std::cout << "El cuadrado de " << num << " es: " << cuadrado(num) << std::endl;
    });

    std::unique_ptr<int> ptr(new int(10));
    std::cout << "El valor almacenado en el puntero es: " << *ptr << std::endl;

    return 0;
}