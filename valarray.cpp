#include "valarray"
#include "iostream"

int main(){
    std::valarray<int> numeros{10,56,7,45,3,2,100};
    std::valarray<int> suma =numeros+1;
    std::valarray<int> resta =numeros-1;
    std::valarray<int> multiplicacion =numeros*2;
    std::valarray<int> division =numeros/2;

    std::cout << "Suma: ";
    for (auto num : suma) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Resta: ";
    for (auto num : resta) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "Multiplicación: ";
    for (auto num : multiplicacion) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "División: ";
    for (auto num : division) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

