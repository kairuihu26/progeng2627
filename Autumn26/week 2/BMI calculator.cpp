#include <iostream>
#include <iomanip>
int main(){
    double weight, height;
    std::cout << "please enter your weight:";
    std::cin >> weight;
    std::cout << "please enter your height:";
    std::cin >> height;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "your BMI is " << weight/(height*height) << std::endl;
}