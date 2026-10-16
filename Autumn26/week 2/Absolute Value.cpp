#include <iostream>

int main(){
    double n;
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    if(n < 0){
        n = -n;
    }
    std::cout << "absolute value: " << n << std::endl;
}