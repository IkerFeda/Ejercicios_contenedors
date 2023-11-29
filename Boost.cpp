#include <iostream>
#include <boost/lexical_cast.hpp>

int main() {
    try {
        std::string str = "12345";
        int num = boost::lexical_cast<int>(str);
        std::cout << "Número convertido: " << num << std::endl;
    } catch (const boost::bad_lexical_cast& e) {
        std::cerr << "Error al convertir la cadena: " << e.what() << std::endl;
    }
    return 0;
}