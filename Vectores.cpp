#include "iostream"
#include "vector"

int main (){
    std::vector<int> numeros;
    numeros.push_back(5);
    numeros.push_back(10);
    numeros.push_back(15);

    std::vector<int>::iterator lista;
    for (lista = numeros.begin(); lista != numeros.end(); ++lista) {
        std::cout << *lista << " ";
    }
}
