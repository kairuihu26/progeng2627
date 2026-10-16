#include <iostream>

int main(){
    int n, sum = 0;
    while(true){
        std::cout << "enter a number:" << std::endl;
        std::cin >> n;
        if (n == 0){
            break;
        }
        else{
            sum = sum + n;
            std::cout << "the sum so far is:" << std::endl;
            std::cout << sum << std::endl;
        }
    }
}