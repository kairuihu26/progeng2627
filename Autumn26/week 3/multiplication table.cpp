#include <iostream>

int main(){
    int n, counter1, counter2;
    std::cin >> n;
    counter1 = 1;

    while(counter1 <= n){
        counter2 = 1;
        while (counter2 <= n){
            std::cout << counter2 * counter1;
            std::cout << "\t";
            counter2 = counter2 + 1;
        }
        std::cout << std::endl;
        // we go on a newline after each row
        counter1 = counter1 + 1;

    }
}