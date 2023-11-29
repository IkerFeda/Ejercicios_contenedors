#include "iostream"
#include "list"
#include "stack"

int main (){
   std::list<double> numeros= {5, 10, 15};
   std::stack<double, std::list<double>> stack(numeros);
   std::cout << "Empezamos a apilar" << std::endl;
   stack.push(20);
   stack.push(25);
   std::cout << "El ultimo elemento es: " << stack.top() << std::endl;
   std::cout << "Desapilamos" << std::endl;
   stack.pop();
   std::cout << "El ultimo elemento es: " << stack.top() << std::endl;
   std::cout << "Desapilamos" << std::endl;
   stack.pop();

}
