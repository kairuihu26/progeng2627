#include <iostream>

int main(){
    double n1, n2, prod;
    std::cout << "please enter the first number" << std::endl;
    std::cin >> n1;

    std::cout << "please enter the second number" << std::endl;
    std::cin >> n2;

    prod = n1 * n2;

    std::cout << n1 << " * " << n2 << " = " <<  prod << std::endl;
}