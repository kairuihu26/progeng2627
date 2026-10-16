#include <iostream>

int main(){
    int n, counter1, counter2;
    std::cin >> n;
    counter1 = n;

    while(counter1 > 0){
        counter2 = n;
        while (counter2>0){
            std::cout << "*";
            counter2 = counter2 - 1;
        }
        std::cout << std::endl;
        // we go on a newline after each row
        counter1 = counter1 - 1;

    }
}