#include <iostream>

int main(){
    int n, sum = 0;
    int counter = 0;
    double average = 0;
    while(true){
        counter = counter + 1;
        std::cout << "enter a number:" << std::endl;
        std::cin >> n;
        if (n == 0){
            break;
        }
        else{
            sum = sum + n;
            average = static_cast<double>(sum) / counter;
            std::cout << "the average so far is:" << std::endl;
            std::cout << average << std::endl;
        }
    }
}